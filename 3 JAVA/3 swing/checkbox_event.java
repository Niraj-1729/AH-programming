import javax.swing.ButtonGroup;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JRadioButton;

import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;


public class checkbox_event 
{
    
    checkbox_event()
    {
        JFrame f=new JFrame("neeraj");
    // ======================================================================

    JRadioButton r1=new JRadioButton("Left");f.add(r1);
    JRadioButton r3=new JRadioButton("Center");f.add(r3);
    JRadioButton r2=new JRadioButton("right");f.add(r2);
    ButtonGroup bg=new ButtonGroup();
    bg.add(r2);bg.add(r1);bg.add(r3);
    r1.setBackground(Color.blue);
    r2.setBackground(Color.red);
    r3.setBackground(Color.green);
    JButton B=new JButton("Swing",new ImageIcon("mood-swings.png"));
    f.add(B);
    r1.addItemListener(new ItemListener()
    {

        @Override
        public void itemStateChanged(ItemEvent e) 
        {
            if(e.getItem()==r1)
            {
                    B.setHorizontalTextPosition(JRadioButton.LEFT);
                    System.out.println(e.paramString());
            }
        }
    });
    r2.addItemListener(new ItemListener()
    {

        @Override
        public void itemStateChanged(ItemEvent e) 
        {
            if(e.getItem()==r2)
            {
                B.setHorizontalTextPosition(JRadioButton.RIGHT);
                System.out.println(e.paramString());
                
            }
        }
    }); 
    r3.addItemListener(new ItemListener()
    {

        @Override
        public void itemStateChanged(ItemEvent e) 
        {
            if(e.getItem()==r3)
            {
                B.setHorizontalTextPosition(JRadioButton.CENTER);
                System.out.println(e.paramString());
               
            }
        }
    });

        // ==========================================================
        f.setVisible(true);
        f.setSize(200,200);
        f.setLayout(new FlowLayout());
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public static void main(String[] args) {
        new checkbox_event();
    }
    
}
