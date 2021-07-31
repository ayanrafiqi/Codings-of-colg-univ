abstract class jana{
abstract void disp();
}
class myabstract extends jana
{
	int x,y;
	myabstract(int a,int b){
	x=a;
	y=b;
	}
	void disp(){
	System.out.println( x+ " "+y);
}
}
class vabstract extends jana
{
	String name;
	void disp(){
	System.out.println("ayan rafiqii");
}
}
class abstractTest
{
public static void main (String args[]){
myabstract obj1=new myabstract(32,36);
vabstract obj2=new vabstract();
obj1.disp();
obj2.disp();
}

}