//Find Missing Number in an Array
import java.util.*;
class Solution 
{
    static int missingNumber(int[]arr,int n)
    {
      for(int i=1;i<=n;i++)
      {
           boolean find=false;
           for(int j=0;j<n;j++)
           {
               if(arr[j]==i)
               {
                         find=true;
                         break;
               }
           }
           if(!find)
           return i;
      }
      return 0;
    }
}
public class MissingNumberArray {
                         public static void main(String[]abc)
                         {
                              int n;
                              System.out.println("Enter Number of an Array Elements");
                              Scanner sc=new Scanner(System.in);
                              n=sc.nextInt();
                              int[]arr=new int[n];
                              System.out.println("Enter array Elements");
                              for(int i=0;i<n;i++)
                              {
                                  arr[i]=sc.nextInt();
                              }
                              int res=Solution.missingNumber(arr,n);
                              System.out.println("Missing Number = "+res);
                              sc.close();
                         
                         }
}
