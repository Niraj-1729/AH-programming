class multi_level {
    int a, b, c;

    void add()
    {
        int a=10, b=20;
        c=a+b;
        System.out.println("Sum of two numbers");
    }

    void sub(){
        int a=10, b=20;
        c=a-b;
        System.out.println("Sum of two numbers");
    }
}

class B extends multi_level {
 void multi()
 {
    int a=10, b=20;
    c=a*b;
 }

}