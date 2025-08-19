
class Solution 
{
     int threeConsecutiveZerosOnes(int[]arr)
     {
                         int n=arr.length;
                         int count=1,max=0;
                         for(int i=1;i<n;i++)
                         {
                             if(arr[i]==arr[i-1])
                             {
                               count++;
                             }
                             else{
                                                  max=Math.max(max,count);
                                                  count=1;
                             }
                         }
                         return Math.max(max,count);

     }
}
public class ThreeConsecutiveZerosOnes {
                         public static void main(String[]abc)
                         {
                            int[]arr={1,0,1,1,1,0,0,0,1,1,1,1};
                            Solution s=new Solution();

                            int max=s.threeConsecutiveZerosOnes(arr);
                            System.out.println("ThreeConsecutive 0's or 1's = "+max);
                         }
                         
}
