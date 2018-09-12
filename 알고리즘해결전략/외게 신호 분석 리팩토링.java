import java.util.Scanner;

public class ExSignalAnalysis_refactored {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase, K, N;

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            K = sc.nextInt();
            N = sc.nextInt();

            long[] array = new long[N];
            long[] signals = new long[N];

            array[0] = 1983;

            setArray(array, N);
            setSignal(signals, array, N);

            System.out.println(optimized(signals, K));
        }
    }

    public static int optimized(long[] signals, int K) {
        int result = 0, tail = 0;
        long rangeSum = signals[0];
        for (int head = 0; head < signals.length; ++head) {
            while (rangeSum < K && tail+1 < signals.length)
                rangeSum += signals[++tail];

            if (rangeSum == K) result++;

            rangeSum -= signals[head];
        }
        return result;
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