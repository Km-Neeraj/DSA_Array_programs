class Solution{
                         void moveZerosEnd(int[]arr)
                         {
                             int n=arr.length;
                             int j=0;
                             int[]temp=new int[n];
                             for(int i=0;i<n;i++)
                             {
                                  if(arr[i]!=0)
                                  {
                                     temp[j++]=arr[i];
                                  }
                             }
                             while(j<n) 
                             {
                                  temp[j++]=0;
                         
                             }
                             
                                 
                             System.out.println("Array elements after removing all zeros to the end");
                             for(int i=0;i<n;i++)
                             {
                                   System.out.print(temp[i]+" ");
                             }
                             

                             }    
}

public class MoveAllZerosEnd {
                         public static void main(String[]abc)
                         {
                            int[]arr={0,0,33,9,0,0,11,22,0};
                            System.out.println("Array Before Moving all Zeros to the end");
                            for(int i=0;i<arr.length;i++)
                            {
                                                  System.out.print(arr[i]+" ");
                            }
                            Solution ob=new Solution();
                            ob.moveZerosEnd(arr);
                         }
                         
}
