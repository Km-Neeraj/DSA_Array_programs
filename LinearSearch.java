//Linear Search
import java.util.*;
class Solution{
    static int linearSearch(int[]arr,int n,int key)
    {
                         for(int i=0;i<n;i++)
                         {
                              if(arr[i]==key)
                              return i;
                         }
                         return -1;
    }
}
public class LinearSearch {
                         public static void main(String[]abc)
                         {
                            int n;
                            Scanner sc=new Scanner(System.in);
                            System.out.println("Enter the number of an array elements");
                            n=sc.nextInt();
                            int[]arr=new int[n];
                            System.out.println("Enter Array Elements");
                            for(int i=0;i<n;i++)
                            {
                                arr[i]=sc.nextInt();
                            }
                            int key;
                            System.out.println("Enter value to search");
                            key=sc.nextInt();
                            int res=Solution.linearSearch(arr,n,key);
                            if(res==-1)
                            {
                              System.out.println(key+" is not present in an array");                    
                            }
                            else 
                            {
                            System.out.println(key+" is present at "+(res+1)+" position");
                            }
                            sc.close();
                         }
                         
}
