/*<applet code = myscrollbar.class width = 300 height = 400></applet>*/
import java.awt.event.*;
import java.awt.*;
import java.applet.*;

public class myscrollbar extends Applet implements AdjustmentListener {
 String type = null;
public void init() {

Scrollbar s = new Scrollbar(Scrollbar.HORIZONTAL, 0, 30, 0, 900);
BorderLayout bl = new BorderLayout();
setLayout(bl);//new BorderLayout());

add(s, BorderLayout.SOUTH);

s.addAdjustmentListener(this);

}

public void adjustmentValueChanged(AdjustmentEvent e){




    System.out.println("\tValue: " + e.getValue());
   
    switch (e.getAdjustmentType()) {
    case AdjustmentEvent.TRACK:
      type = "Track";
      break;
    case AdjustmentEvent.BLOCK_DECREMENT:
      type = "Block Decrement";
      break;
    case AdjustmentEvent.BLOCK_INCREMENT:
      type = "Block Increment";
      break;
    case AdjustmentEvent.UNIT_DECREMENT:
      type = "Unit Decrement";
      break;
    case AdjustmentEvent.UNIT_INCREMENT:
      type = "Unit Increment";
      break;
    }
type = type + " " + e.getValue();
repaint();
    System.out.println("\tType: " + type);
  }


public void paint(Graphics g) {
g.drawString(type,100,100);

}
}
