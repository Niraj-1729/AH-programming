class method_overloading {
    void add ()
    {
        int a = 10 , b=20 , c;
        c=a+b;
        System.out.println(c);
    }
    void add (int x , int y)
    {
        int  c;
        c=x+y;
        System.out.println(c);
    }
    void add (int x , double y)
    {
        double c;
        c=x+y;
        System.out.println(c);
    }
    public static void main(String[] args) {
        method_overloading m=new method_overloading();
        m.add();
        m.add(20, 30);
        m.add(30 , 50.5);
    }
}
