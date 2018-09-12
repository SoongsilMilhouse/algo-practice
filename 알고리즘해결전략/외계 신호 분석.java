import java.util.*;

public class ExSignalAnalysis {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase, K, N;

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            K = sc.nextInt();
            N = sc.nextInt();

            long[] array = new long[N];
            long[] signals = new long[N];
            int head = 0, tail = 0, result = 0, sum = 0;

            array[0] = 1983;

            setArray(array, N);
            setSignal(signals, array, N);

            while (head < signals.length) {
                sum += signals[tail];

                if (sum == K) {
                    tail = ++head;
                    result++;
                    sum = 0;
                } else if (sum < K) {
                    if (tail < signals.length - 1)
                        tail++;
                    else
                        tail = ++head;
                } else {
                    tail = ++head;
                    sum = 0;
                }

            }

            System.out.println(result);
        }
    }

    public static void setArray(long[] array, int N) {
        for (int i = 1; i < N; i++) {
            array[i] = (long)((array[i-1] * 214013 + 2531011) % Math.pow(2, 32));
        }

    }

    public static void setSignal(long[] signals, long[] array, int N) {
        for (int i = 0; i < N; i++) {
            signals[i] = array[i] % 10000 + 1;
        }
    }
}
