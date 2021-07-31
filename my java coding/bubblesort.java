 import java.util.Scanner;
        class bubblesort
        {
            public static void  main (String args[])
            {
                int i , j,temp;
                int a[]=new int[10];
                Scanner sc=new Scanner(System.in);
                for(i=0;i<10;i++)
                {
                    System.out.println("Enter Numbers");
                    a[i]=sc.nextInt();
                }
                for(i=0;i<9;i++)
                {
                    for(j=0;j<9-i;j++)
                    {
                        if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                    }
                }
                for(j=0;j<10;j++)
                {
                    System.out.println("Sorted array " +a[j]);
                }
            }
}