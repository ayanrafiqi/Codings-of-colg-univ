import java.util.Scanner;
class countPrime
{
public static void main (String args[])
{
int arr[]=new int[5];
int count=0,x=2,i;
Scanner kb=new Scanner(System.in);
System.out.println("enter the array elements");
for(i=0;i<arr.length;i++)
    arr[i]=kb.nextInt();
    for(i=0;i<arr.length;i++)
    {
        while(arr[i]%x!=0)
        {
            x++;
        }
        if(arr[i]==x)
            count++;
        System.out.println("the total prime num of  array is :"+count);
}
}
}
