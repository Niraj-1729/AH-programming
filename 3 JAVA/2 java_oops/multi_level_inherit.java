class a1 {
    int a = 34, b = 23;

    void display() {
        System.out.println("hii my name is neeraj");
    }
}
// ======================================================================
class a2 extends a1 {
    int c = 23, d = 34;

    void sum() {
        System.out.println(a + b);
    }
}
// ======================================================================

class a3 extends a2 {
    void sub() {
        System.out.println(c - d);
    }
}
// ======================================================================

class a4 extends a3 {
    void mul() {
        System.out.println(a * b);
    }
}
// ======================================================================

public class multi_level_inherit {
    public static void main(String[] args) 
    {
        a3 a = new a3();
        a.sub();
        a.sum();
        a.display();

        a2 b = new a2();
        b.sum();
        b.display();

    }
}
