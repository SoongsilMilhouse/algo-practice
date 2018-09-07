import java.util.Scanner;
import java.util.Stack;

public class Brackets2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase;

        testCase = sc.nextInt();

        for(int i = 0; i < testCase; i++) {
            Stack stack = new Stack();
            String[] brackets = sc.next().split("");

            for(int j = 0; j < brackets.length; j++) {
                if(brackets[j].equals("(") || brackets[j].equals("{") || brackets[j].equals("[")) {
                    stack.push(brackets[j]);
                } else {
                    if((brackets[j].equals(")") && stack.peek().equals("(")) || (brackets[j].equals("}") && stack.peek().equals("{")) || (brackets[j].equals("]") && stack.peek().equals("[")) )
                        stack.pop();
                    else
                        stack.push(brackets[j]);
                }
            }
            
            if(!stack.isEmpty())
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}