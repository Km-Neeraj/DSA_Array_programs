  /* Given a positive integer num, return true if num is a perfect square or false otherwise.
    A perfect square is an integer that is the square of an integer.
     In other words, it is the product of some integer with itself.
    You must not use any built-in library function, such as sqrt     */

#include<stdio.h>
#include<stdbool.h>
bool isPerfectSquare(int num) {
                         if(num==0||num==1)
                         return num;
                         int low=1,high=num,res=0;
                         while(low<=high)
                         {
                            long long mid=low+(high-low)/2;
                              if(mid*mid==num)
                              {
                                  return 1;
                              }
                              else if(mid*mid<num)
                              {
                                 low=mid+1;
                              }
                              else
                              {
                                  high=mid-1;
                              }
                            }
                         
                         return 0;
                         
}
int main()
{
   int x=16;
   int res=isPerfectSquare(x);
   if(res==1)
   {
      printf("true");
   }
   else{
          printf("False");
   }
   return 0;
}

/*        Input: num = 16
          Output: true
          Explanation: We return true because 4 * 4 = 16 and 4 is an integer. */