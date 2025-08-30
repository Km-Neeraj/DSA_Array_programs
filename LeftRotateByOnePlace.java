//   Left Rotate an Array by One Place 
import java.util.*;
class Solution {
                         static int[] leftRotateByOnePlace(int[]arr,int n)
                         {
                               
                              int[]res=new int[n];
                              res[n-1]=arr[0];
                              int j=0;
                              for(int i=1;i<n;i++)
                              {
                                 res[j]=arr[i];
                                 j++;
                              }
                              return res;
                         }

}
public class LeftRotateByOnePlace {
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter number of Elements");
                            n=sc.nextInt();
                            int[]arr=new int[n];
                            System.out.println("Enter Array Elements");
                            for(int i=0;i<n;i++)
                            {
                                arr[i]=sc.nextInt();
                            }
                            int[]res=Solution.leftRotateByOnePlace(arr,n);
                            for(int i=0;i<n;i++)
                            {
                               System.out.print(res[i]+" ");
                            }
                            sc.close();

                         }
                         
}
