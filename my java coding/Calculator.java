//<applet code="Calculator.class" width=400 height=500></applet>
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
 public class Calculator extends JApplet implements ActionListener
{
 int a,b,c;
float d;
JLabel l1,l2,l3;
JTextField t1,t2,t3;
JButton bsum,bsubtract,bmultiply,bdivide;
public void init()
{
JPanel p=new JPanel();
l1=new JLabel("Enter 1st number");
l2=new JLabel("Enter 2nd number");
l3=new JLabel("Result");
t1=new JTextField(10);
t2=new JTextField(10);
t3=new JTextField(10);
bsum=new JButton("SUM");
bsubtract=new JButton("SUBTRACT");
bmultiply=new JButton("MULTIPLY");
bdivide=new JButton("DIVIDE");
getContentPane().add(p);
	p.add(l1);
	p.add(t1);
	p.add(l2);
	p.add(t2);
	p.add(bsum);
	p.add(bsubtract);
	p.add(bmultiply);
	p.add(bdivide);
	p.add(l3);
	p.add(t3);
	bsum.addActionListener(this);
	bsubtract.addActionListener(this);
	bmultiply.addActionListener(this);
	bdivide.addActionListener(this);
	
}
 	public void actionPerformed(ActionEvent ae)
	{
	Object obj;
	obj=ae.getSource();
       	if (obj==bsum)
	{
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	c= a+b;
	t3.setText(String.valueOf(c));
}
	if (obj==bsubtract)
	{
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	c= a-b;
	t3.setText(String.valueOf(c));
}
	if (obj==bmultiply)
	{
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	c= a*b;
	t3.setText(String.valueOf(c));
}
	if (obj==bdivide)
	{
	a=Integer.parseInt(t1.getText());
	b=Integer.parseInt(t2.getText());
	d= (float)a/b;
	t3.setText(String.valueOf(d));
}
}
}