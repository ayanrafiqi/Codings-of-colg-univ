class base
{
int x;
base (int k){
x=k;
}
void disp(){
System.out.println(x);
}
}
class Derived  extends  base 
{
int j;
Derived(int p){
super(p);
j=x*2;
}
 void show(){
System.out.println(j);
}
}
class demo
{
public static void main(String args[])
{
Derived obj=new Derived(20);
obj.show();
obj.disp();
}

}



