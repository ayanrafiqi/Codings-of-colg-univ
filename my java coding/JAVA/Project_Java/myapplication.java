/*<applet code = myapplication.class width = 800 height = 800></applet>*/
import java.awt.event.*;
import java.awt.*;
import java.applet.*;
import java.net.*;

public class myapplication extends Applet implements ActionListener {

String type = null;
TextField name1, name2;
Button nextb, cancelb, populb;
Label label1, label2, label3, label4;
Checkbox chk1, chk2;
List l1;
public void init() {
MyBean.setname("Sajad Gul");;
	setLayout(null);

Font f1 = new Font("Dialog",Font.PLAIN,24);
Font f2 = new Font("Dialog",Font.PLAIN,16);
setFont(f1);

label1 = new Label("Enter Name:");
label2 = new Label("Enter Course:");
label3 = new Label("Enter College:");
label4 = new Label("Populate List");

	name1 = new TextField("your name here", 20);
	name2 = new TextField("IITM", 12);
	name1.select(0, 14);
	l1 = new List();
	name1.setFont(f2);
	name2.setFont(f2);
	l1.setFont(f2);

nextb = new Button("Next");
cancelb = new Button("Cancel");
populb = new Button("Enter");

	CheckboxGroup chkG = new CheckboxGroup();
	chk1 = new Checkbox("MCA", true, chkG);
	chk2 = new Checkbox("MBA", false, chkG);


	add(name1);
	add(nextb);
	add(cancelb);
	add(label1);
	add(label2);
	add(label3);
	add(chk1);
	add(chk2);
	add(l1);
	add(label4);
	add(populb);
	add(name2);
label1.setBounds(30, 100, 140, 30);
label2.setBounds(30, 150, 160, 30);
label3.setBounds(30, 200, 170, 30);
name1.setBounds(190, 100, 220, 25);
chk1.setBounds(200, 150, 80, 30);
chk2.setBounds(290, 150, 90, 30);
l1.setBounds(200, 200, 130, 180);
nextb.setBounds(350, 420, 100, 25);
cancelb.setBounds(240, 420, 100, 25);
label4.setBounds(360, 190, 100, 20);
name2.setBounds(340, 210, 130, 25);
populb.setBounds(365, 240, 80, 25);



nextb.addActionListener(this);
populb.addActionListener(this);
name1.addActionListener(this);
}

public void start() {

}

public void actionPerformed(ActionEvent e) {
	if(e.getActionCommand() == "Enter") {
		l1.add(name2.getText());
	}
	else if(e.getActionCommand() == "Next") {

		MyBean.setname(name1.getText());
		if(chk1.getState())
			MyBean.setcourse(chk1.getLabel());
		else
			MyBean.setcourse(chk2.getLabel());

		MyBean.setcollege(l1.getSelectedItem());


		AppletContext ac = getAppletContext();
		URL url = getCodeBase();
		try {
			System.out.println(url + "secondapplet.java");
			ac.showDocument(new URL(url+"secondapplet.html"), "_self");
		
		}catch(MalformedURLException er) {
			showStatus("URL not found");
		}
	}
		repaint();
}



public void paint(Graphics g) {

Color c = new Color(233,24,44);
g.setColor(c);
	g.drawString("*** APPLICATION FORM ***", 110, 65);
	g.drawRect(10, 80, 480, 380);



}

}


/*
Label()
Label(String str)
Label(String str, int dir)
		Label.LEFT, Label.Right

void setText(String str)
String getText()
Void setAlignment(int dir)
int getAlignment()

============================================

Button()
Button(String str)

void setLabel(String str)
String getLabel()

============================================
Checkbox()
Checkbox(String str)
Checkbox(String str, boolean on)
Checkbox(String str, boolean on, CheckboxGroup cbg)

boolean getState()
void setState(boolean on)
String getLabel()
void setLabel(String str)

============================================
Checkbox getSelectedCheckbox()
void setSelectedCheckbox(Checkbox c)
==========================================
Choice()

void add(String name)
String getSelectedItem()
int getSelectedIndex()
int getItemCount()
void select(int index)
void select(string name)
String getItem(int index)
==========================
List()
List(int numRows)
List(int numRows, boolean mulselect)

void add(String name)
void add(String name,int index)
String getSelectedItem()
int getSelectedIndex()
int getItemCount()
void select(int index)
String getItem(int index)
============================
Scrollbar()
Scrollbar(int style, int inivalue, int thumbsize, int min, int max)

int getValue()
void setValue(int newvalue)
int getMinimum()
int getMaximum()
void setUnitIncrement( int newincr)
void setBlockIncrement(int newincr)
=====================================
TextField()
TextField(int numchars)
TextField(String str)
TextField(String str, int numchars)

String getText()
void setText(String str)
String getSelectedText()
void select(int startindex, int endindex)
boolean isEditabe()
void setEditable(boolean canEdit)
void setEchoChar(char ch)
boolean echoCharIsSet()
char getEchoChar()
==========================
TextArea()
TextArea(int nooflines, int noofchars)
TextArea(String str)
TextArea(String str, int nooflines, int noofchars)
TextArea(String str, int nooflines, int noofchars, int sbars)
			SCROLLBARS_VERTICAL_ONLY / 

void append(String str)
void insert(String str, int index)
void replaceRange(String str, int startindex, int endindex)

*/