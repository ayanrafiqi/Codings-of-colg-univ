/*<applet code = buttonlayoutdemo.class width = 300 height = 400></applet>*/
import java.awt.event.*;
import java.awt.*;
import java.applet.*;

public class buttonlayoutdemo extends Applet{

public void init() {

	Button b[] = new Button[5];
	
	for(int i=0;i<5;i++){
		b[i] = new Button();
		b[i].setLabel("Button " + (i + 1));
		add(b[i]);
	}

	setLayout(new FlowLayout());

}

public void paint(Graphics g) {
g.drawString("type", 100, 100);

}
}
