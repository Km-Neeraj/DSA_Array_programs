import java.util.*;
class Solution {
                         int[] productExceptSelf(int[]arr,int n)
                         {
                             int z=0,idx=-1,p=1;
                             for(int i=0;i<n;i++)
                             {
                               if(arr[i]==0)
                               {
                                 z++;
                                 idx=i;
                               }
                               else{
                                                  p=p*arr[i];
                               }
                             } 
                             int[]res=new int[n];
                             Arrays.fill(res,0);
                             if(z==0)
                             {
                               for(int i=0;i<n;i++)
                               {
                                  res[i]=p/arr[i];
                               }
                             } 
                             else if(z==1)
                             {
                               res[idx]=p;
                             } 
                             return res;                  
                         }

}
public class ProductExceptSelf {
                         public static void main(String[]abc)
                         {
                                                  int n;
                                                  Scanner sc=new Scanner(System.in);
                                                  System.out.println("Enter number of elements");
                                                  n=sc.nextInt();
                                                  int[]arr=new int[n];
                                                  System.out.println("Enter Array Elements");
                                                  for(int i=0;i<n;i++)
                                                  {
                                                    arr[i]=sc.nextInt();
                                                  }
                                                  Solution ob=new Solution();
                                                  int res[]=ob.productExceptSelf(arr,n);
                                                  for(int c :res)
                                                  {
                                                                           System.out.print(c+" ");
                                                  }
                                                  sc.close();
                         }
                         
}
