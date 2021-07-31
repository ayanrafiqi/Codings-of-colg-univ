//this keyword can also be passed as an argument in the method.
class s2
{
void m(s2 obj){
System.out.println("hello ayan");
}
void p(){
m(this);	
}
public static void main(String args[]){
s2 obc= new s2();
obc.p();
}

}