public class swap {
    public static void main(String[] args) {
        int a, b, t;
        a = 5;
        b = 10;
        System.out.println("Before Swapping:");
        System.out.print("a="+a);
        System.out.print("b="+b);
        
        t = a;
        a = b;
        b = t;

        System.out.println("After Swapping");
        System.out.println( "a="+a);
        System.out.println( "b="+b);

    }
}
