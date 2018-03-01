
import java.util.Stack;

class Program {

    public static void main(String[] args) {
        Stack st = new Stack();
        int n = 16;
        while (n > 0) {
            st.push(n % 2);
            n = n / 2;
        }

        while (!st.empty()) {
            System.out.print(st.pop());
        }
        System.out.println("");
    }
}
