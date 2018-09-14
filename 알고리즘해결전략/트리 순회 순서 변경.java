import java.util.*;

public class Traversal {
    static int testCase, N;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        testCase = sc.nextInt();
        N = sc.nextInt();

        int[] preOrder = new int[N];
        int[] inOrder = new int[N];
        List postOrder = new ArrayList();

        for (int i = 0; i < N; i++)
            preOrder[i] = sc.nextInt();

        for (int i = 0; i < N; i++)
            inOrder[i] = sc.nextInt();

        printPostOrder(preOrder, inOrder, postOrder);
        System.out.println(postOrder);
    }

    public static void printPostOrder(int[] preOrder, int[] inOrder, List postOrder) {
        if (preOrder == null || preOrder.length == 0)
            return;

        int N = preOrder.length;
        int root = preOrder[0];

        int L = contains(inOrder, root);

        printPostOrder(Arrays.copyOfRange(preOrder, 1, L+1),
                       Arrays.copyOfRange(inOrder, 0, L), postOrder);

        printPostOrder(Arrays.copyOfRange(preOrder, L+1, N),
                       Arrays.copyOfRange(inOrder, L+1, N), postOrder);

        postOrder.add(root);
    }

    static int contains(int[] array, int root) {
        for (int i = 0; i < array.length; i++) {
            if (root == array[i]) {
                return i;
            }
        }
        return -1;
    }
}
