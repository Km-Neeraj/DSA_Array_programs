/*Given a non-negative integer x, return the square root of x rounded down
 to the nearest integer. The returned integer should be non-negative as well.
  You must not use any built-in exponent function or operator.
  For example, do not use pow(x, 0.5)  */
  #include<stdio.h>
  int mySqrt(int x) {

                         if(x==1||x==0)
                         return x;
                         
                           int low=1,high=x,res=0;
                           while(low<=high)
                           {
                               long long mid=low+(high-low)/2;
                               if(mid*mid==x)
                               {
                                 return mid;
                             
                               }
                               else if(mid*mid<x)
                               {
                                  res=mid;
                                  low=mid+1;
                               }
                               else
                               {
                                 high=mid-1; 
                               }
                           }
                         
                           return res;
 }
 int main()
 {
    int x=8;
    int res=mySqrt(x);
    printf("Rounded squareroot = %d ",res);
    return 0;
 }
                             
  /*     Input: x = 8
         Output: 2
         Explanation: The square root of 8 is 2.82842..., and since we round it
          down to the nearest integer, 2 is returned.*/                        