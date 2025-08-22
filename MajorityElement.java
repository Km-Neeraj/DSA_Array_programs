import java.util.*;
class Solution
 {

                         int majorityElement(int[]arr,int n)
                         {
                                                  int count=0;
                              Arrays.sort(arr);
                              int candidate=arr[n/2];
                              for(int num:arr)
                              {
                                  if(num==candidate)
                                  {
                                                  count++;
                                  }
                              }
                              if(count>n/2)
                              {
                                                  return candidate;
                              }
                              return -1;
                         }
                         
}
public class MajorityElement
{
public static void main(String[]abc)
{
    int n;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the number of an array Elements");
    n=sc.nextInt();
    int []arr=new int[n];
    System.out.println("Enter Array Elements");
    for(int i=0;i<n;i++)
    {
          arr[i]=sc.nextInt();
    }
    Solution ob=new Solution();
    int majority=ob.majorityElement(arr,n);
    if(majority==-1)
    {
                         System.out.println("Majority Element doesn't exist");
    }
    else{
    System.out.println("Majority Element = "+majority);
    }
    sc.close();
}
}
