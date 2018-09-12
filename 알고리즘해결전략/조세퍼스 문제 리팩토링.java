import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Josephus_refactored {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int C, N, K;

        C = sc.nextInt();

        for (int i = 0; i < C; i++) {
            List list = new LinkedList();
            int kill = 0;

            N = sc.nextInt();
            K = sc.nextInt();
            setList(list, N);

            while (list.size() > 2) {
                list.remove(kill);
                if (kill == list.size()) kill = 0;

                for (int j = 0; j < K - 1; j++) {
                    kill++;
                    if (kill == list.size()) kill = 0;
                }
            }
            System.out.println(list);
        }
        sc.close();
    }

    public static void setList(List list, int N) {
        for (int i = 1; i <= N; i++) {
            list.add(i);
        }
    }
}
