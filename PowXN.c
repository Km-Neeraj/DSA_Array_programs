/*    Implement pow(x, n), which calculates x raised to the power n (i.e., xn).*/
#include<stdio.h>
double myPow(double x, int n) {
                         if(n==0)
                         return 1;
                         double half=myPow(x,n/2);
                         if(n%2==0)
                         return half*half;
                         else
                         {
                             if(n>0)
                             return x*half*half;
                             else
                             return (half*half)/x;
                         }
}

int main() {
                         double x=2.00000;
                         int n=10;
                     
                         
                     
                         double result = myPow(x, n);
                         printf("Result: %.5lf\n", result);
                     
                         return 0;
}

/*   Input: x = 2.00000, n = 10
     Output: 1024.00000*/
                         
                     