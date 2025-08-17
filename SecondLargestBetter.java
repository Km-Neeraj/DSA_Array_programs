import java.util.*;
class SecondLargest{

                         int secondMax(int[] arr,int n)
                         {
                                                  int largest=Integer.MIN_VALUE;
                                                  int secondLargest=Integer.MIN_VALUE;

                            for(int i=0;i<n;i++)
                            {
                                                  if(arr[i]>largest)
                                                  {
                                                       largest=arr[i];
                                                  }
                            }
                            for(int i=0;i<n;i++)
                            {
                              if(arr[i]>secondLargest&&arr[i]!=largest)
                              {
                                                  secondLargest=arr[i];
                              }
                            }
                            return secondLargest;
                         }
                       
}
public class SecondLargestBetter {
                         public static void main(String[]abc)
                         {
                                                  int n;
                                                  Scanner sc=new Scanner(System.in);
                                                  System.out.println("Enter Number of Array Elements");
                                                  n=sc.nextInt();
                                                  int[] arr=new int[n];
                                                  System.out.println("Enter "+n+" elements");
                                                  for(int i=0;i<n;i++)
                                                  {
                                                       arr[i]=sc.nextInt();
                                                  }
                                                  SecondLargest ob=new SecondLargest();
                                                  if(ob.secondMax(arr,n)==Integer.MIN_VALUE)
                                                  {
                                                       System.out.println("Second Greatest Element doesn't exist");                    
                                                  }
                                                  else{
                                                                           System.out.println("SecondLargest Element = "+ob.secondMax(arr,n));

                                                  }
                         }
                         
}
