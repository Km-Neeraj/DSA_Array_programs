import java.util.*;
class Solution {

          static ArrayList<Integer> spiralMatrix(int[][]arr,int n,int m)
          {
              ArrayList<Integer> res=new ArrayList<>();
              int top=0,bottom=n-1;
              int left=0,right=m-1;
              while(top<=bottom&&left<=right)
              {
                  for(int i=left;i<=right;i++)
                  {
                     res.add(arr[top][i]);

                  }
                  top++;
                  for(int i=top;i<=bottom;i++)
                  {
                     res.add(arr[i][right]);

                  }
                  right--;
                  if(top<=bottom)
                  {
                    for(int i=right;i>=left;i--)
                    {
                         res.add(arr[bottom][i]);
                    }
                    bottom--;
                  }

                    if(left<=right)
                    {
                         for(int i=bottom;i>=top;i--)
                         {
                              res.add(arr[i][left]);
                         }
                         left++;
                    }
                  }
              return res;
          }
}
public class SpiralMatrix {
                         public static void main(String[]abc)
                         {
                              int n,m;
                              Scanner sc=new Scanner(System.in);
                              System.out.println("Enter number of row and column");
                              n=sc.nextInt();
                              m=sc.nextInt();
                              int[][] arr=new int[n][m];
                                System.out.println("Enter Array Element");
                              for(int i=0;i<n;i++)
                              {
                                   for(int j=0;j<m;j++)
                                   {
                                                  arr[i][j]=sc.nextInt();
                                   }
                              }
                              ArrayList<Integer> res=Solution.spiralMatrix(arr,n,m);
                              System.out.println("Spiral Matrix");
                              for(int c: res)
                              {
                                    System.out.print(c+" ");
                              }
                         }
                         
}
