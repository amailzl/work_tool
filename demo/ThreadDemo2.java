
/**
 * Created by feizi on 2018/5/17.
 */
public class ThreadDemo2 extends Thread {

    private String name;

    private static int flag = 0;

    public ThreadDemo2(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        if(name == "xc1") {
            xc1Ope();
        }
        if(name == "xc2") {
            xc2Ope();
        }
    }

    synchronized private void xc1Ope() {
        int i = 0;
        for (;i < 5 ; i ++) {
            // System.out.println("Thread[" + name + "]: before - " + flag);
            flag ++;
            mSleep(1000);
            System.out.println("Thread[" + name + "]: after - " + flag);
        }
    }

    synchronized  private void xc2Ope() {
        int i = 0;
        for (;i < 5 ; i ++) {
            // System.out.println("Thread[" + name + "]: before - " + flag);
            flag ++;
            mSleep(1000);
            System.out.println("Thread[" + name + "]: after - " + flag);
        }
    }

    public void mSleep (int time) {
        try{
            Thread.sleep(time);
        } catch (InterruptedException e) {
            System.out.println("InterruptedException[" + e + "]");
        }
    }

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

        Thread t1 = new ThreadDemo2("xc1");
        t1.start();

        Thread t2 = new ThreadDemo2("xc2");
        /*直接调用run()方法*/
        t2.start();
    }

}