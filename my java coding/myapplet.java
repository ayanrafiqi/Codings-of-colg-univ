//<applet code="myapplet.class" width=400 height=500></applet>
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
	public class myapplet extends Applet implements MouseMotionListener
{
	 int x;
	int y;
	public void init(){
	addMouseMotionListener(this);
}
	public void mouseMoved(MouseEvent me)
{
	x=me.getX();
	y=me.getY();
	repaint();
}
	public void mouseDragged(MouseEvent me){
}
	public void paint(Graphics gr)
{
	//gr.drawLine(49,51,200,55);
	gr.drawRect(49,100,200,250);
	Font f=new Font("Lucida Calligraphy",Font.ITALIC,32);
	gr.setFont(f);
	gr.drawString(x +" ," +y,x,y);
	gr.setColor(Color.green);
	gr.drawString("hey ayan",98,235);
	}


}

		

