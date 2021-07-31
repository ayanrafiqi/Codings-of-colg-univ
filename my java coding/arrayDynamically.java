import java.util.Scanner;
class arrayDynamically
{
	public static void main(String args[])
{
	int i=0;
	Scanner kb=new Scanner(System.in);
	System.out.println("enter the array size");
	int s=kb.nextInt();
	int arr[] =new int[s];
	System.out.println("----------------");
	System.out.println("enter the array elements");
	System.out.println("--------------------");
	while(i<s)
{
	arr[i]=kb.nextInt();
	i++;
}
       
	while(s>=0){
            System.out.print(arr[i]+ " ");
            s--;
}
}


}
