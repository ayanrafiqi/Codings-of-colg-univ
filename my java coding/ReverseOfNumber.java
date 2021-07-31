class ReverseOfNumber
{
	public static void main (String args[])
	{
	int number = 1234,reverse = 0 , m ;
	while(number > 0){
	m= number % 10;
	reverse = (reverse * 10) + m;
	number = number/10;
	}
	System.out.println("Reverse of a number is" + reverse);
	}
	}



  	

