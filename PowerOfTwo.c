/* Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.*/

#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int n) {
                         if(n<=0) return false;
                         return(n&(n-1))==0;
                     }
int main()
{
    int n=16;
    if(isPowerOfTwo)
    {
          printf("true");
    }
    else{
             printf("false");
    }
    return 0;
}

/*     Input: n = 16
      Output: true
      Explanation: 24 = 16*/