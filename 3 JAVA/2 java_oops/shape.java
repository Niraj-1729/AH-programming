class demo {
    void draw() {
        System.out.println("can't predict shape");
    }

}

class square extends demo {
    @Override
    void draw() {
        System.out.println("square shape");
    }
}

class shape {
    public static void main(String[] args) {
        demo r = new square();

        r.draw();
    }

}
