//    Check if the Array is Sorted 
import java.util.*;
class Solution {
     static boolean checkArraySorted(int[]arr,int n)
     {

          for(int i=1;i<n;i++)
          {
                         if(arr[i]<arr[i-1])
                         {
                                                  return false;
                         }
          }
          return true;
     }
}
public class CheckArraySorted {
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter Number of Array Elements");
                            n=sc.nextInt();
                            int[]arr=new int[n];
                            System.out.println("Enter Array Elements");
                            for(int i=0;i<n;i++)
                            {
                                arr[i]=sc.nextInt();
                            }
                            boolean res=Solution.checkArraySorted(arr,n);
                            if(res)
                            {
                                                  System.out.println("Array is Sorted");
                            }
                            else 
                            {
                                                  System.out.println("Array is not Sorted");
                            }
                            sc.close();
                         }
                         
}
