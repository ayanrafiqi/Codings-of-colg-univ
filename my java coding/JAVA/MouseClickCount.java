/*<applet code = MouseClickCount.class width = 300 height = 400></applet>*/

import java.applet.*;
import java.awt.*;
import java.awt.event.*;


public class MouseClickCount extends Applet implements MouseListener{
	
	int i;
	String msg = "";

	public void init() {
		

		addMouseListener(this);
	}
	
	public void mouseClicked(MouseEvent me) {



  if (me.getClickCount() == 1) {
    System.out.println("Single click");
  }
  else if (me.getClickCount() == 2) {
   System.out.println("2 click");
  }
  else if (me.getClickCount() == 3) {
   System.out.println("3 click");}


  System.out.println("okokok");


		msg = "Mouse Clicked";
		repaint();
	}

public void mouseEntered(MouseEvent me) {
		msg = "Mouse Entered";
		repaint();
	}

	public void mouseExited(MouseEvent me) {
		msg = "Mouse Exited";
		repaint();
	}

	
	public void mousePressed(MouseEvent me) {
		msg = "Mouse Pressed";
		repaint();
	}
	public void mouseReleased(MouseEvent me) {
		msg = "Mouse Released";
		repaint();
	}





	public void paint(Graphics g) {
		
		g.drawString(msg,10,10);

	}
}