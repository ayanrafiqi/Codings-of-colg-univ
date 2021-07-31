import java.util.Scanner;
class FactorialOfNumber{
public static void main (String args[]){
 int fact=1,number;
	Scanner obj = new Scanner(System.in);
	System.out.print("enter the number");
	number=obj.nextInt(); 	
	
	while(number > 0){
	fact=fact*number;
	number-- ;
}
	System.out.print("factorial of a number is" + fact);
	}
 


}

