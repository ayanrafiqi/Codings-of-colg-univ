import java.util.Scanner;
class Arrays
{
	public static void main(String args[])
{
         int arr[]=new int[5];
         int j=0,rev= -1; 
            Scanner kb= new Scanner(System.in);
        
          if(rev==arr.length)
          System.out.println(" arrays element is full");
          else
	          System.out.println("enter the elements");
	   do{
               rev++;
               arr[rev]=kb.nextInt();
             } while(rev<arr.length); 
	
              if(rev==-1){
                     System.out.println("Empty Array");
                 }
                else{
                   j=rev;
                 }
                  while(j>0){
                   System.out.println(arr[j]+ "");
                   j--;
                   
              }        
       }
}
