import java.util.Scanner;
class SumOfOneDArrays
{
	public static void main(String args[])
	{
	int arr[]= new int[5],sum=0;
	Scanner kb=new Scanner(System.in);
	for(int i=0;i<arr.length;i++)
	{
	System.out.print("enter the array elements..");
	arr[i]=kb.nextInt();
}
	for(int i=0;i<arr.length;i++)
	{
	sum=sum +arr[i];
}
	System.out.print("sum of  array elements is.." +sum);
	}




}



