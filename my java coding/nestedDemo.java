class outerClass
{
int eng;
 void getMarks()
{
  eng=66;
urdu obj2=new urdu();
obj2.disp();
}
class innerClass 
{
int urdu;
void disp(){
 urdu=33;
System.out.println(eng);
System.out.println(urdu);
//System.out.println("total marks :" +total);
}
class nestedDemo
{
public static void main(String args[ ])
{
english obj= new english();
obj.getMarks();
}
}
}
}