import java.util.Scanner;
class SelectionSort
{
public static void main(String args[])
{
	int i=0,j,temp=0;
	int arr[]=new int[5];
	Scanner kb=new Scanner(System.in);
	System.out.println("enter the array element");
	arr[i]=kb.nextInt();
	for(i=0 ; i<arr.length ; i++){
	for( j=i+1 ; j< arr.length; j++){
	 if(arr[i]>arr[j])
{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
}
}
	for(i=0 ; i<arr.length ; i++){
		System.out.println("sorted array is " +arr[i]);
                        }
 }

}



