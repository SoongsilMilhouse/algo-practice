import java.util.*;

public class ExSignalAnalysis_refactored_2 {
    private static int testCase, K, N;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            K = sc.nextInt();
            N = sc.nextInt();

            System.out.println(solve());
        }
    }

    public static long solve() {
        RandomNumberGenerator randomNumberGenerator = new RandomNumberGenerator();
        Queue<Long> range = new LinkedList<>();
        int result = 0;
        int rangeSum = 0;

        for (int i = 0; i < N; i++) {
            long newSignal = randomNumberGenerator.next();
            rangeSum += newSignal;
            range.offer(newSignal);

            while (rangeSum > K)
                rangeSum -= range.poll();


            if (rangeSum == K) result++;
        }
        return result;
    }
}

class RandomNumberGenerator {
    long seed;
    long mod = (1L << 32);

    public RandomNumberGenerator() {
        this.seed = 1983;
    }

    public long next() {
        long result = seed;
        seed = ((seed * 214013) + 2531011) % mod;
        return result % 10000 + 1;
    }
}
