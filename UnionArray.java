import java.util.*;
class Solution 
{
    static ArrayList<Integer> unionArray(int[]arr1,int[]arr2,int n,int m)
    {
               ArrayList<Integer> res=new ArrayList<>();

               for(int i=0;i<n;i++)
               {
                         if(!res.contains(arr1[i]))
                         {
                                                  res.add(arr1[i]);
                         }
               }

               for(int i=0;i<m;i++)
               {
                         if(!res.contains(arr2[i]))
                         {
                                                  res.add(arr2[i]);
                         }
               }
               Collections.sort(res);
               return res;

    }
}
public class UnionArray {
                         public static void main(String[]abc)
                         {
                         int n,m;
                         Scanner sc=new Scanner(System.in);
                         System.out.println("Enter the size of first array");
                         n=sc.nextInt();
                         System.out.println("Enter the size of second array");
                         m=sc.nextInt();
                         int[]arr1=new int[n];
                         int[]arr2=new int[m];
               System.out.println("Enter First Array Element");
                         for(int i=0;i<n;i++)
                         {
                                                  arr1[i]=sc.nextInt();
                         }
                         System.out.println("Enter Second Array Elements");
                         for(int i=0;i<m;i++)
                         {
                                                  arr2[i]=sc.nextInt();
                         }
                         ArrayList<Integer> res=Solution.unionArray(arr1,arr2,n,m);
                         System.out.println("Union Of Two Sorted Array");
                         for(int c:res)
                         {
                                                  System.out.print(c+" ");
                         }

                         
}
}
