/*<applet code = "MouseAdapterdemo.class" width = 400 height = 600></applet>*/

import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class MouseAdapterdemo extends Applet{
	
	int x;
	int y;

	public void init(){
		addMouseMotionListener(new mousedemo(this));
	}

	public void paint(Graphics g){
		g.drawString("x = " + x + ", Y = " + y, x, y);
	}

}

class mousedemo extends MouseMotionAdapter{
	
	MouseAdapterdemo mad;
	
	mousedemo(MouseAdapterdemo mad){
		this.mad = mad;
	}

	public void mouseMoved(MouseEvent me){
		mad.x = me.getX();
		mad.y = me.getY();
		mad.repaint();
	}
}