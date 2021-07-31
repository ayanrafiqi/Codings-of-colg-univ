//<applet code="CheckBox.class" width=400 height=400></applet
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class CheckBox extends JApplet implements ItemListener
{
	JLabel l1,l2;
	JTextField t1,t2;
	JCheckBox cb;

 	public void init()
{
	JPanel p=new JPanel();
	l1=new JLabel("Name");
	l2=new JLabel("Marks");
	t1=new JTextField(20);
	t2=new JTextField(20);
	cb=new JCheckBox("Show Controls");
	cb.addItemListener(this);
	l1.setVisible(false);
	l2.setVisible(false);
	t1.setVisible(false);
	t2.setVisible(false);
	getContentPane().add(p);
	p.add(l1);
	p.add(t1);
	p.add(l2);
	p.add(t2);
	p.add(cb);

}
	public void itemStateChanged(ItemEvent ae)
{
	Object obj;
	obj=ae.getItemSelectable();
	if(obj==cb)
{
	if(cb.isSelected())
	{
	l1.setVisible(true);
	l2.setVisible(true);
	t1.setVisible(true);
	t2.setVisible(true);
	cb.setText("Hide controls");
}
	else
{
	l1.setVisible(false);
	l2.setVisible(false);
	t1.setVisible(false);
	t2.setVisible(false);
	cb.setText("Show controls");
	}

}
}
}		