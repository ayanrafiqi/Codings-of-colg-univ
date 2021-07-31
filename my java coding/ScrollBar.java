//<applet code="ScrollBar.class" width=400 height=400></applet>
import javax.swing.*;
import java.awt.*;
import  java.awt.event.*;	

	public class ScrollBar extends JApplet implements AdjustmentListener
{
	JScrollBar hsb,vsb;
	JLabel l1;
	public void init()
{	
	JPanel p=new JPanel();
	hsb=new JScrollBar(Scrollbar.HORIZONTAL,0,0,0,100);
	vsb=new JScrollBar(Scrollbar.VERTICAL,0,0,0,100);
	l1=new JLabel("Value:");
	BorderLayout bl=new BorderLayout();
	p.setLayout(bl);
	getContentPane().add(p);
	p.add(hsb, bl. SOUTH);
	p.add(vsb, bl. EAST);
	p.add(l1, bl.CENTER);
	hsb.addAdjustmentListener(this);
	vsb.addAdjustmentListener(this);
	}
	public void adjustmentValueChanged(AdjustmentEvent ae)
{
	Object obj;	
	obj=ae.getAdjustable();
	if(obj==hsb)
{
	l1.setText("Horizontal value is : " + hsb.getValue());
	}
	else
	{
	l1.setText("Vertical value is : " + vsb.getValue());
	}
}
}
	