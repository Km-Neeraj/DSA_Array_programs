import java.util.*;
class Solution 
{
                           static void sortArray(int[]arr,int n)
                           {
                               int hi=n-1;
                               int lo=0;
                               int mid=0;
                               while(mid<=hi)
                               {
                                    if(arr[mid]==0)
                                    {
                                 int temp=arr[lo];
                                 arr[lo++]=arr[mid];
                                 arr[mid++]=temp;
                                    }
                               
                               else if(arr[mid]==1)
                               {
                                 mid++;
                               }
                               else 
                               {
                                  int temp=arr[mid];
                                  arr[mid]=arr[hi];
                                  arr[hi--]=temp;
                               }
                               }

                           }
}
public class Sort012 {
                         public static void main(String[]abc)
                         {
                             int n;
                             Scanner sc=new Scanner(System.in);
                             System.out.println("Enter the size of an array");
                             n=sc.nextInt();
                             int[]arr=new int[n];
                             System.out.println("Enter Array Elements");
                             for(int i=0;i<n;i++)
                             {
                                arr[i]=sc.nextInt();

                             }
                             Solution.sortArray(arr,n);
                             for(int i=0;i<n;i++)
                             {
                               System.out.print(arr[i]+" ");
                             }
                             sc.close();
                         }
                         
}
