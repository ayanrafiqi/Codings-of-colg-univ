import java.util.Scanner;
class PrimeSeries{
	public static void main (String args[])
{
	int num ,x = 2;
	Scanner kb =new Scanner(System.in);
	System.out.println("enter the num");
	num=kb.nextInt();
	while(num % x != 0)
{

   	x ++;
} 
     if(num == x )
	System.out.println("num is a prime"); 
	else
	System.out.println("num is not prime.");
 	}


}






 












