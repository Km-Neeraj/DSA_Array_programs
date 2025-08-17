// Java program to find the second largest element in the array
// using one traversal

import java.util.*;
class SecondLargest{

                         int largest=-1,secondLargest=-1;
                         int secondMax(int[]arr,int n)
                         {
                             for(int i=0;i<n;i++)
                             {
                                if(arr[i]>largest)
                                {
                                                  secondLargest=largest;
                                                  largest=arr[i];
                                }
                                else if(arr[i]<largest&&arr[i]>secondLargest)
                                {
                                                  secondLargest=arr[i];
                                }
                             } 
                             return secondLargest;
                         }
                        
}
public class SecondLargestExpected {

                         public static void main(String[]abc)
                         {
                             Scanner sc=new Scanner(System.in);
                             System.out.println("Enter the number of elements of an Array");
                              int n=sc.nextInt();
                              int[] arr=new int[n];
                              System.out.println("Enter "+n+" Elements ");
                              for(int i=0;i<n;i++)
                              {
                                  arr[i]=sc.nextInt();
                              }
                              SecondLargest ob=new SecondLargest();
                              System.out.println("Second Largest Element = "+ob.secondMax(arr,n));
                         }
                         
}
