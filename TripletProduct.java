import java.util.*;
class Triplet
{
     int maxProduct(int[]arr,int n)
     {
              return Math.max(arr[0]*arr[1]*arr[n-1],arr[n-1]*arr[n-2]*arr[n-3]);
     }
}
public class TripletProduct {
                         public static void main(String[]abc)
                         {
                             int n;
                             Scanner sc=new Scanner(System.in);
                             System.out.println("Enter the number of elements");
                             n=sc.nextInt();
                             System.out.println("Enter "+n+" Element");
                             int[] arr=new int[n];
                             for(int i=0;i<n;i++)
                             {
                                 arr[i]=sc.nextInt();
                             }
                             Triplet ob=new Triplet();
                             int res=ob.maxProduct(arr,n);
                             System.out.println("Maximum product of Triplet = "+res);
                         }
                         
}
