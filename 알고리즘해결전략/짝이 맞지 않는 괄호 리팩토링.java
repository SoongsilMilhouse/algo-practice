import java.util.Scanner;
import java.util.Stack;

public class Brackets2_refactored_2 {
    final static String opening = "({[", closing = ")}]";

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack stack = new Stack();
        int testCase;

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            stack.clear();
            String[] brackets = sc.next().split("");

            if (wellMatched(stack, brackets)) System.out.println("YES");
            else System.out.println("NO");
        }
    }

    public static boolean wellMatched(Stack stack, String[] brackets) {
        for (int i = 0; i < brackets.length; i++) {
            if (opening.indexOf(brackets[i]) != -1) {   
                stack.push(brackets[i]);
            } else {
                if (stack.isEmpty()) return false;
                if (opening.indexOf((String)stack.peek()) != closing.indexOf(brackets[i]))
                    return false;
                stack.pop();
            }
        }

        return stack.isEmpty();
    }
}