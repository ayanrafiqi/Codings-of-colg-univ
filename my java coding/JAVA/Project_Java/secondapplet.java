/*<applet code = secondapplet.class width = 600 height = 800></applet>*/
import java.awt.event.*;
import java.awt.*;
import java.applet.*;

public class secondapplet extends Applet  {
Font f1, f2, f3;
String urname, urcourse, urcollege;
Label label1, label2, label3, label11, label22, label33;

public void init() {
	setLayout(null);
	urname = MyBean.getname();
	urcourse = MyBean.getcourse();
	urcollege = MyBean.getcollege();

f1 = new Font("Dialog",Font.PLAIN,24);
f2 = new Font("Dialog",Font.PLAIN,16);
f3 = new Font("Dialog",Font.PLAIN,20);
setFont(f1);

label1 = new Label("Your Name is: ");
label2 = new Label("your Course is: ");
label3 = new Label("Your College is: ");

	label11 = new Label();
	label22 = new Label();
	label33 = new Label();

	label1.setFont(f2);
	label2.setFont(f2);
	label3.setFont(f2);

label11.setFont(f3);
label22.setFont(f3);
label33.setFont(f3);

	add(label1);
	add(label2);
	add(label3);
add(label11);
add(label22);
add(label33);
	
	label1.setBounds(30, 100, 130, 30);
	label2.setBounds(30, 150, 130, 30);
	label3.setBounds(30, 200, 130, 30);
label11.setBounds(180, 100, 140, 30);
label22.setBounds(180, 150, 160, 30);
label33.setBounds(180, 200, 170, 30);

label11.setText(MyBean.getname());
label22.setText(MyBean.getcourse());
label33.setText(MyBean.getcollege());

}


public void paint(Graphics g) {

Color c = new Color(233,24,44);
g.setColor(c);
	g.drawString("*** Your Details ***", 110, 65);
	g.drawRect(10, 80, 440, 190);

}

}