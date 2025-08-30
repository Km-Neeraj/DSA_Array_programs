import java.util.*;
class Solution 
{
    static int largestElementByCollection(int[]arr,int n)
    {
                         List<Integer> list=new ArrayList<>();
                         for(int i=0;i<n;i++)
                         {
                             list.add(arr[i]);
                         }
                         return Collections.max(list);
    }
}
public class LargestElementByCollection {
                         public static void main(String[]abc)
                         {
                             int n;
                             Scanner sc=new Scanner(System.in);
                             System.out.println("Enter Number of Array Element");
                             n=sc.nextInt();
                             int[]arr=new int[n];
                             System.out.println("Enter Array Elements");
                             for(int i=0;i<n;i++)
                             {
                               arr[i]=sc.nextInt();
                             }
                             int largest=Solution.largestElementByCollection(arr,n);
                             System.out.println("Largest Element = "+largest);
                             sc.close();
                         }
                         
}
