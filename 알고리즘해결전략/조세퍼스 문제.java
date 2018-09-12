import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Josephus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int C, N, K;

        C = sc.nextInt();

        for (int i = 0; i < C; i++) {
            List list = new LinkedList();
            int kill = 0;
            int killNext = 0;

            N = sc.nextInt();
            K = sc.nextInt();
            killNext = K - 1;

            for (int j = 1; j < N; j++) {
                list.add(j + 1);
            }

            while (list.size() > 2) {
                kill = killNext;
                killNext = (killNext + K - 1) % (list.size() - 1);
                list.remove(kill);
            }
            System.out.println(list);
        }
        sc.close();
    }
}
