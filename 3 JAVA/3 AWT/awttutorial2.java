
//without extending frame class we can just create frame by  
// creating object :)
import java.awt.*;
import java.awt.event.*;

public class awttutorial2 {
    public awttutorial2() {
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        // instance of frame with label
        Frame frame = new Frame("Button Example ");

        
         //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //  instance of button with label
        Button button= new Button("Click Here");
        


        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        // se theposition of frame in button 
        button.setBounds(50,100,80,30);


        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        // add button to the frame
        frame.add(button);

        // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        // set size layout and visibility of frame
        frame.setSize(400,400);
        frame.setLayout(null);
        frame.setVisible(true);
         

        frame.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                frame.dispose();
            }
        });
    }

    public static void main(String[] args) {
        new awttutorial2();
    }
}
