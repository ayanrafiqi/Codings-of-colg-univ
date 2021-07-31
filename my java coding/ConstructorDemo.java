class Constructor
{
	int x,y;
	void display()
{
	System.out.println(x + " " +y);
	}
}
class ConstructorDemo
{
	public static void main(String args[])
{
	Constructor obj=new Constructor(11,22);
	obj.display();

}
}
