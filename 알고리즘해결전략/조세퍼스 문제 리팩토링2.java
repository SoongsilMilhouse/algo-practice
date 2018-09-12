import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Josephus_refactored_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int C, N, K;

        C = sc.nextInt();

        for (int i = 0; i < C; i++) {
            N = sc.nextInt();
            K = sc.nextInt();

            Queue queue = new LinkedList();
            setQueue(queue, N);

            while(queue.size() > 2) {
                queue.poll();

                for(int j = 0; j < K-1; j++) {
                    queue.add(queue.poll());
                }
            }
            System.out.println(queue);
        }
        sc.close();
    }

    public static void setQueue(Queue queue, int N) {
        for (int i = 1; i <= N; i++) {
            queue.add(i);
        }
    }
}