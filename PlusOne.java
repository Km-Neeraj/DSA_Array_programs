import java.util.*;
class Solution{
                         int[] AddOne(int arr[],int n)
                         {
                              int carry=1;
                              for(int i=n-1;i>=0;i--)
                              {
                                 int sum=arr[i]+carry;
                                 arr[i]=sum%10;
                                 carry=sum/10;
                              }  
                              if(carry>0)
                              {
                                   int[] newArray=new int[n+1];
                                   newArray[0]=carry;
                                   System.arraycopy(arr,0,newArray,1,n);
                                   return newArray;               
                              }  
                              return arr;                 
                         }

               void printArray(int[]arr,int n)
               {
                    for(int i=0;i<n;i++)
                    {
                         System.out.print(arr[i]+" ");
                    }
               }

}
public class PlusOne {
                       public static void main(String[]abc)
                       {
                           int n;
                           Scanner sc=new Scanner(System.in);
                           System.out.println("Enter the number of elements of an Array");
                           n=sc.nextInt();
                           int[] arr=new int[n];
                           System.out.println("Enter Array Elements");
                           for(int i=0;i<n;i++)
                           {
                               arr[i]=sc.nextInt();
                           }
                           Solution ob=new Solution();
                           System.out.println("Array elements before adding 1 at the end of the array");
                           ob.printArray(arr,n);
                           int[]arr1=ob.AddOne(arr,n);
                           System.out.println();
                           System.out.println("Array Elements after Adding 1 at the end of the original Array");
                           ob.printArray(arr1,arr1.length);
                         }
}
