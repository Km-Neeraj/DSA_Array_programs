/*    Given an integer n, return true if it is a power of three. Otherwise, return false.
 An integer n is a power of three, if there exists an integer x such that n == 3x.*/

 #include<stdio.h>
 #include<stdbool.h>
 bool isPowerOfThree(int n) {
                         if(n<=0)
                         return false;
                         while(n%3==0)
                         {
                            n=n/3;
                         }
                         return n==1;
                         
  }
  int main()
  {
      int n= -1;
      if(isPowerOfThree(n))
      {
         printf("true");
      }
      else{
              printf("false");
      }
      return 0;
  }

  /*    Input: n = -1
       Output: false
       Explanation: There is no x where 3x = (-1).*/