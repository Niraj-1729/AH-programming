package Inheritance_oops;

public class animal {
    void eat() {
        System.out.println(" I am eating ");
    }
}

class dog extends animal {
    public static void main(String[] args) {
        dog d = new dog();

        d.eat();
    }

}
