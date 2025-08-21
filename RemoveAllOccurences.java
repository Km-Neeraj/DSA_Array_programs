//Remove All Occurrences of an Element in an Array
import java.util.*;
class Solution 
{
     int removeElement(int[]arr,int n, int key)
     {
                         int k=0;
             for(int i=0;i<n;i++)
             {
                if(arr[i]!=key)
                {
                         arr[k++]=arr[i];
                }  
             }
             return k;
     }
     void printArray(int[]arr,int n)
     {
                         for(int i=0;i<n;i++)
                         {
                              System.out.print(arr[i]+" ");
                         }
     }
}
public class RemoveAllOccurences {
                         public static void main(String[]abc)
                         {
                             int n;
                             Scanner sc=new Scanner(System.in);
                             System.out.println("Enter The number of elements of an Array");
                             n=sc.nextInt();
                             int[]arr=new int[n];
                             System.out.println("Enter Array Elements");
                             for(int i=0;i<n;i++)
                             {
                                                  arr[i]=sc.nextInt();
                             }
                             Solution ob=new Solution();
                             System.out.println("Array Elements Before removing of all Occurences of a given particular num");
                             ob.printArray(arr,n);
                             System.out.println();
                             System.out.println("Enter the particular number to remove");
                             int key=sc.nextInt();
                             
                             System.out.println();
                             System.out.println(" Remaining Number of Array elements "); 
                             int count=ob.removeElement(arr,n,key);
                             System.out.println(count);
                             sc.close();
                         }
                         
}
