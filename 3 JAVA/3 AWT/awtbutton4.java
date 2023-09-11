import java.awt.*;
import java.awt.event.*;

public class awtbutton4 {
    public static void main(String[] args) {
        Frame f = new Frame("Button Example");
        final TextField tf = new TextField();
        tf.setBounds(50, 50, 150, 20);

        Button b = new Button("Click Here");
        b.setBounds(50, 100, 60, 30);

        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                tf.setText("value1 ");
            }
        });
         
        // adding button the frame
        f.add(b);
        // adding textfield the frame
        f.add(tf);
        // setting size, layout and visibility
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
    }
}
    
