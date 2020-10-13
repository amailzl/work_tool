/**
 * Definition for a binary tree node.
 * public class BinaryTree {
 *     int val;
 *     BinaryTree left;
 *     BinaryTree right;
 *     BinaryTree(int x) { val = x; }
 * }
 */
import java.util.ArrayList;

public class BinaryTree {
    public int val;
    public BinaryTree left;
    public BinaryTree right;
    public BinaryTree(int x) { val = x; }
    static int answer = 0;
    static ArrayList<Integer> allElements = new ArrayList<Integer>();


    public static void main(String[] args) {

        BinaryTree node = new BinaryTree(5);
        BinaryTree node1 = new BinaryTree(4);
        BinaryTree node2 = new BinaryTree(7);
        node.right = node1;
        node.left = node2;

        int s = getMinimumDifference(node);
        System.out.println("Solution is " + s);
    }

    public static int getMinimumDifference(BinaryTree root) {
        searchTree(root);
        System.out.println("allElements is " + allElements);
        answer = getabs(allElements.get(0), allElements.get(1));
        int size = allElements.size();
        for(int i = 0; i < size; i ++) {
            for (int j = 0; j < size; j++){
                if (i == j) continue;
                if (allElements.get(i) == allElements.get(j)) return 0;
                int r = getabs(allElements.get(i), allElements.get(j));
                System.out.println("r is :" + r);
                if (answer > r) answer = r;
            }
        }
        return answer;
        // return allElements.get(2);
    }

    public static void searchTree(BinaryTree root) {
        allElements.add(root.val);
        if (root.right != null){
            searchTree(root.right);
        } 
        if (root.left != null) {
            searchTree(root.left);
        } 
    }

    public static int getabs(int x, int y) {
        return (x - y) >= 0? (x - y) : (y - x); 
    }
}
