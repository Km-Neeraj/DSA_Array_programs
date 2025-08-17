import java.util.*;
class SecondLargest{
                          int secondMax(int[]arr,int n)
                          {
                            Arrays.sort(arr);

                            for(int i=n-2;i>=0;i--)
                            {
                               if(arr[i]<arr[n-1])
                               {
                                   return arr[i];
                               }
                            } 
                            return -1; 
                         }
}
public class SecondLargestNaive
{
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter the number of elements");
                            n=sc.nextInt();
                            int[] arr=new int[n];
                            System.out.println("Enter "+n+" elements");
                            for(int i=0;i<n;i++)
                            {
                               arr[i]=sc.nextInt();
                            }

                            SecondLargest ob=new SecondLargest();
                            int max=ob.secondMax(arr,n);
                            if(max==-1)
                            {
                                                  System.out.println("Second Greatest element doesn't exists");
                            }
                            else{
                                      System.out.println("SecondLargest Element = "+max);

                            }
                            sc.close();
                            
                            
                         }
}