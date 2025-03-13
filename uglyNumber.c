/*   An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
       Given an integer n, return true if n is an ugly number.*/
    #include<stdio.h>
    #include<stdbool.h>
       bool isUgly(int n) {
                         if(n<=0) return false;
                        for(int i=2;i<=5;i++)
                        {
                            while(n%i==0)
                            {
                               n=n/i;
                            }
                        }
                        return(n==1);
  }
  int main()
  {
    int n=6;
    if(isUgly(n))
    {
        printf("true");
    }
    else
    {
       printf("false");
    }
    return 0;
  }

  /*Input: n = 6
Output: true
Explanation: 6 = 2 × 3*/