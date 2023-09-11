import java.awt.*;
 

//by extending or inheriting frame 
public class awtlecture extends Frame {

    public awtlecture() {

        Button b = new Button("click me");
        b.setBounds(getBounds());

        setLayout(null);

        setSize(400, 400);
        setVisible(true);

        // by creation of frmae

        // Frame f = new Frame("Hello World");
        // Button b = new Button("Click Me");

        // TextField tf = new TextField();
        // tf.setBackground(Color.blue);
        // tf.setBounds(20, 120, 150, 30);

        // Label l = new Label("hello friends");
        // l.setBackground(Color.CYAN);
        // l.setBounds(20, 90, 150, 30);

        // b.setBackground(Color.red);
        // b.setForeground(Color.black);
        // b.setBounds(20, 40, 80, 30);

        // f.add(b);
        // f.add(l);
        // f.add(tf);

        // f.setSize(400, 400);
        // f.setLayout(null);
        // f.setVisible(true);

        // f.addWindowListener(new WindowAdapter() {

        // @Override
        // public void windowClosing(WindowEvent e) {
        // super.windowClosing(e);
        // f.dispose();
        // }

        // });

    }

    public static void main(String[] args) {
        new awtlecture();

    }
}
