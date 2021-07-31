interface Bank{
float rateOfInterest();
}
class SBI implements Bank{
public float rateOfInterest(){
return(19.56f);
}
}
class PNB implements Bank
{
public float rateOfInterest()
{
return(56.20f);
}
}
class Interface
{
public static void main(String args[]){
Bank obj=new PNB();
System.out.println("ROI="+obj.rateOfInterest());
}
}  