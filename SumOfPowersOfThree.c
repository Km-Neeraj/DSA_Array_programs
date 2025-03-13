/*    Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.
  An integer y is a power of three if there exists an integer x such that y == 3x.*/

  #include<stdio.h>
  #include<stdbool.h>
  bool checkPowersOfThree(int n) {
                         while(n>0)
                         {
                           if(n%3==2)
                           {
                              return false;
                           }
                           n=n/3;
                         }
                         return true;
  }

  int main()
  {
     int n=12;
     if(checkPowersOfThree(n))
     {
         printf("true");
     }
     else{
            printf("false");
     }
     return 0;
  }

  /*    Input: n = 12
        Output: true
       Explanation: 12 = 31 + 32*/
                         