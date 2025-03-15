/*The Fibonacci numbers, commonly denoted F(n) form a sequence, 
called the Fibonacci sequence, such that each number is the sum of the two
 preceding ones, starting from 0 and 1. That is,
   F(0) = 0, F(1) = 1
   F(n) = F(n - 1) + F(n - 2), for n > 1.
    Given n, calculate F(n).*/


  #include<stdio.h>
    int fib(int n){
                         int f=0,s=1,t;
                         if(n==0)
                         return 0;
                         if(n==1)
                         return f+s;
                         for(int i=2;i<=n;i++)
                         {
                            t=f+s;
                            f=s;
                            s=t;
                         }
                         return t;
    }
    int main()
    {
      int n=2;
      int res=fib(n);
      printf("%d",res);
      return 0;
    }

    /*   Input: n = 2
         Output: 1
         Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.*/