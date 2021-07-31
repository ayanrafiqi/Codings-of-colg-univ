import java.util.Scanner;
class SumArray
{
public static void main(String args[])
{
int i=0;
int arr[]=new int[5];
int brr[]=new int[5];
int crr[]=new int[arr.length];
Scanner kb=new Scanner(System.in);
System.out.println("Enter the first array element");
for( i=0;i<arr.length;i++)
{
arr[i]=kb.nextInt();
}
System.out.println("Enter the 2nd array elements");
for( i=0;i<brr.length;i++)
{
brr[i]=kb.nextInt();
}
for(i=0;i<arr.length;i++)
{
crr[i]=arr[i]*brr[i];
}
System.out.print("Multiplication of Two Array is=");
for(int j=0;j<arr.length;j++)
{
System.out.print(crr[j]+ ",");
//System.out.println
}
}
}


