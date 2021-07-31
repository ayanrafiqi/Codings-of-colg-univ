class Base
{
int x,y,sum;
void Add(int p,int q){
x=p;
y=q;
sum=x+y;
} 
void display()
{
System.out.println("sum of base class >>>>>> " +sum);
}
}
class Derived extends Base
{
int x,y,sub;
void Sub(int p,int q)
{
x=p;
y=q;
sub=x-y;
super.x=20;
super.y=30;
super.sum=super.x+super.y;
display();
}
void show()
{
System.out.println("sub of derived class >>>>"  +sub);
}
}
class DemoSuper
{
public static void main(String args[])
{
Derived obj=new Derived();
obj.Add(66,44);
obj.display();
obj.Sub(50,20);
obj.show();
}
}
