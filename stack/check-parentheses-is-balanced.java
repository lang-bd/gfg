
import java.util.Stack;

class Program {

    private static final char L_PAREN = '(';
    private static final char R_PAREN = ')';
    private static final char L_BRACE = '{';
    private static final char R_BRACE = '}';
    private static final char L_BRACKET = '[';
    private static final char R_BRACKET = ']';

    public static boolean isBalanced(String str) {

        Stack<Character> stack = new Stack<Character>();

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == L_PAREN) {
                stack.push(L_PAREN);
            }
            if (str.charAt(i) == L_BRACE) {
                stack.push(L_BRACE);
            }
            if (str.charAt(i) == L_BRACKET) {
                stack.push(L_BRACKET);
            }

            if (str.charAt(i) == R_PAREN) {
                if (stack.isEmpty()) {
                    return false;
                }
                if (stack.pop() != L_PAREN) {
                    return false;
                }
            }

            if (str.charAt(i) == R_BRACE) {
                if (stack.isEmpty()) {
                    return false;
                }
                if (stack.pop() != L_BRACE) {
                    return false;
                }
            }

            if (str.charAt(i) == R_BRACKET) {
                if (stack.isEmpty()) {
                    return false;
                }
                if (stack.pop() != L_BRACKET) {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }

    public static void main(String[] args) {
        String s = "((()))";
        System.out.println(isBalanced(s));
    }
}
