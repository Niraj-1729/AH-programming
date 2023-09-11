import java.util.*;

class consoleexmaple {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            System.out.print("Enter second number- ");
            int b = sc.nextInt();
            System.out.print("Enter third number- ");
            int c = sc.nextInt();
            int d = a + b + c;
            System.out.println("Total= " + d);
        }

    }
}