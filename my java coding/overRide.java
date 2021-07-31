class A
{
int x,y;
 A(int a, int b){
x=a;
y=b;
}
void disp(){
System.out.println( x+ " " +y);
}
}
class B extends A
{
 int z;
B(int a, int b,int c){
super (a, b);
z=c;
}
void disp()
{
super.disp();   //this calls the As method
System.out.println(z+ " " );
}
}
class overRide{
public static void main(String args[])
{
B obj = new B(33,55,99);
obj.disp();
}

}
