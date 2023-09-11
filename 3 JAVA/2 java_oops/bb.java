class encapsulation_oops{
    private int value; // data hiding

    public void setValue(int x) {
        value = x;
    }

    public int getValue() {
        return value;
    }
}

class bb {
    public static void main(String[] args) {
     encapsulation_oops r = new encapsulation_oops();
        // e.value=100;
        // System.out.println(e.value); // normal method of accesing public class
        // variables but here we are accessing from private class
        r.setValue(100);
        System.out.println(r.getValue());
    }
}
