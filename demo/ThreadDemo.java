import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.locks.ReentrantLock;
/**
 * Created by feizi on 2018/5/17.
 */
public class ThreadDemo {
    private static int flag = 0;
    private volatile static List<String> mTaskQueue = java.util.Collections.synchronizedList(new LinkedList<String>());
    static ReentrantLock lock = new ReentrantLock();

    public static void main(String[] args) {
        /**
         * 控制台输出结果：
         * 主线程ID是： 1
         * 名称线程2的线程ID是：1
         * 名称线程1的线程ID是：11
         * 结论：
         * 1、主线程和线程2的线程ID相同，说明直接调用run()方法不会创建新的线程，而是在主线程中直接调用run()方法，普通的方法调用
         * 2、线程1先调用start()方法，而后线程2调用run()方法，最终却线程2先于线程1输出，说明新建的线程并不会影响主线程的执行顺序
         */

        System.out.println("主线程ID是： " + Thread.currentThread().getId());
        System.out.println("mLinkedList is " + getLinkedList());

        getLinkedList();
        System.out.println("mLinkedList is " + getLinkedList());
        Thread t1 = new MyThread("xc1");
        t1.start();
        mSleep(1000);

        Thread t2 = new MyThread("xc2");
        /*直接调用run()方法*/
        t2.start();
    }


     static public  void xc1Ope() {
        lock.lock();// 上锁
        try {
            int i = 0;
        // for (;i < 10 ; i ++) {
            flag ++;
            mSleep(5000);
            mTaskQueue.get(0);
            System.out.println("Thread[1]: after - " + flag);
        // }
        } finally {
            lock.unlock();
        }
    }

     static public void xc2Ope() {
        lock.lock();// 上锁
        try {
        int i = 0;
        // for (;i < 10 ; i ++) {
            flag ++;
            mTaskQueue.clear();
            System.out.println("Thread[2]: after - " + flag);
        // }
        } finally {
            lock.unlock();
        }
    }

     static public List getLinkedList() {
        return mTaskQueue == null? mTaskQueue : mTaskQueue;
    }

    public static void mSleep (int time) {
        try{
            Thread.sleep(time);
        } catch (InterruptedException e) {
            System.out.println("InterruptedException[" + e + "]");
        }
    }
}

/**
 * 自定义线程
 */
class MyThread extends Thread{
    /*线程名称*/
    private String name;

    public MyThread(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        if(name == "xc1") {
            ThreadDemo.xc1Ope();
        }
        if(name == "xc2") {
            ThreadDemo.xc2Ope();
        }
    }


}