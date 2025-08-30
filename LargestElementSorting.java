import java.util.*;
class Solution 
{
    static int largestBySorting(int[]arr,int n)
    {
        Arrays.sort(arr);
        return arr[n-1];
    }
}
public class LargestElementSorting {
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter number of array eleemnts");
                            n=sc.nextInt();
                            int[]arr=new int[n];
                            System.out.println("Enter Array Elements");
                            for(int i=0;i<n;i++)
                            {
                              arr[i]=sc.nextInt();
                            }
                            int largest=Solution.largestBySorting(arr,n);
                            System.out.println("Largest Element = "+largest);
                            sc.close();
                         }
                         
}
