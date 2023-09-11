
import javax.swing.*;

import java.awt.*;


public class jtabbed_eg 
{
    jtabbed_eg()
    {
        JFrame f=new JFrame("neeraj");
        GridLayout experimentLayout = new GridLayout(0,1);

        // ======================================================================

   

        JTabbedPane tp=new JTabbedPane();
        f.add(tp);
        JPanel p1=new JPanel();
        JPanel p2=new JPanel();
        JPanel p3=new JPanel();

        tp.addTab("cut",new ImageIcon("cutting.png"), p1);
        tp.addTab("copy",new ImageIcon("copy.png"), p2);
        tp.addTab("paste",new ImageIcon("paste.png"), p3);

        JLabel l=new JLabel("hii this is tab 1");p1.add(l);
        JLabel l2=new JLabel("Hii this is tab 2");
        p2.add(l2);
        JLabel l3=new JLabel("HII this is MY new TAB 3");p3.add(l3)  ;




        // ==========================================================
        f.setVisible(true);
        f.setSize(200,200);
        f.setLayout(experimentLayout );
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    
    }

    public static void main(String[] args) {
        new jtabbed_eg();
    }
    
}
