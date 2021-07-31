/*<applet code = "innerclassMouseAdapterdemo.class" width = 400 height = 600></applet>*/

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class innerclassMouseAdapterdemo extends Applet{
	
	int x;
	int y;

	public void init(){
		addMouseMotionListener(new innerclassdemo());
	}

	public void paint(Graphics g){
		g.drawString("x = " + x + ", Y = " + y, x, y);
	}



	class innerclassdemo extends MouseMotionAdapter{
	
		public void mouseMoved(MouseEvent me){
			x = me.getX();
			y = me.getY();
			repaint();
		}
	}
}