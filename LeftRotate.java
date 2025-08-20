import java.util.*;
class Solution{
                         void reverse(int[]arr,int s,int e)
                         {
                              while(s<e) 
                              {
                                  int t=arr[s];
                                  arr[s]=arr[e];
                                  arr[e]=t;
                                  s++;
                                  e--;
                              }
                         }
}
public class LeftRotate {
                         public static void main(String[]abc)
                         {
                                                  int n;
                                                  Scanner sc=new Scanner(System.in);
                                                  System.out.println("Enter the number of elements");
                                                  n=sc.nextInt();
                                                  System.out.println("Enter Array Elements");
                                                  int[]arr=new int[n];

                                                  for(int i=0;i<n;i++)
                                                  {
                                                      arr[i]=sc.nextInt();
                                                  }
                                                                                                     int d;
                                                  System.out.println("Enter the position of an array rotation");
                                                  d=sc.nextInt();

                                                  System.out.println("Array Elements Before Rotation");
                                                  for(int i=0;i<n;i++)
                                                  {
                                                                           System.out.print(arr[i]+" ");
                                                  }
                                                 
                                                  Solution ob=new Solution();
                                                  
                                                  ob.reverse(arr,0,d-1);
                                                  ob.reverse(arr,d,n-1);
                                                  ob.reverse(arr,0,n-1);
                                                  System.out.println("Array Elements After Rotation");
                                                  for(int i=0;i<n;i++)
                                                  {
                                                      System.out.print(arr[i]+" ");
                                                  }
                                                  sc.close();
                         }
                         
}
