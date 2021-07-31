import java.util.Scanner;
class EvenOdd{
	public static void main (String args[])
	{
	int number,x=2;
	Scanner kb= new Scanner(System.in);
	System.out.print("enter the number");
	number=kb.nextInt();

		if(number% x == 0)
		System.out.println("number is even");
	else 
		System.out.println("number is odd");

		}



}



