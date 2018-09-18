import java.util.*;

class TreeNode {
    List<TreeNode> children = new ArrayList<>();
}

class Ascending implements Comparator<Integer> {
    @Override
    public int compare(Integer o1, Integer o2) {
        return o1.compareTo(o2);
    }
}

public class Fortress {
    static int[] x = new int[100];
    static int[] y = new int[100];
    static int[] radius = new int[100];
    static int longest;
    static int numberOfWalls;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase;

        testCase = sc.nextInt();

        for(int i = 0; i < testCase; i++) {
            numberOfWalls = sc.nextInt();
            for(int j = 0; j < numberOfWalls; j++) {
                x[j] = sc.nextInt();
                y[j] = sc.nextInt();
                radius[j] = sc.nextInt();
            }

            TreeNode T = getTree(0);
            System.out.println(solve(T));
        }

    }

    static TreeNode getTree(int root) {
        TreeNode result = new TreeNode();
        for(int ch = 0; ch < numberOfWalls; ++ch) {
            if(isChild(root, ch))
                result.children.add(getTree(ch));
        }
        return result;
    }

    static boolean isChild(int parent, int child) {
        if(!encloses(parent, child)) return false;
        for(int i = 0; i < numberOfWalls; i++)
            if(i != parent && i != child && encloses(parent, i) && encloses(i, child))
                return false;
        return true;
    }

    static boolean encloses(int a, int b) {
        return radius[a] > radius[b] && sqrdistance(a, b) < sqr(radius[a] - radius[b]);
    }

    static int sqr(int x) {
        return x*x;
    }

    static int sqrdistance(int a, int b) {
        return sqr(y[a] - y[b]) + sqr(x[a] - x[b]);
    }

    static int solve(TreeNode root) {
        longest = 0;
        int h = getHeight(root);
        return Math.max(longest, h);
    }

    static int getHeight(TreeNode root) {
        List<Integer> heights = new ArrayList<>();
        for(int i = 0; i < root.children.size(); i++) {
            heights.add(getHeight(root.children.get(i)));
        }
        if(heights.isEmpty())
            return 0;
        Ascending ascending = new Ascending();
        Collections.sort(heights, ascending);

        if(heights.size() >= 2) {
            longest = Math.max(longest, 2 + heights.get(heights.size() - 2) + heights.get(heights.size() - 1));
        }
        return heights.get(heights.size() -1) + 1;
    }
}
