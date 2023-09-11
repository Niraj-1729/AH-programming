public class ah_2_overloading {
    int multiply(int a , int b ){
        return a*b;
}

    int multiply(int a, int b, int c) {
        return a * b * c;

    }

    public static void main(String[] args) {
        ah_2_overloading  obj = new ah_2_overloading();
        int c = obj.multiply(5,4);
        int d = obj.multiply(5,4,6);
        System.out.println(c);
        System.out.println(d);

    }
}
