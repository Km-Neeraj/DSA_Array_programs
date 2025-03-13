/*     Given an integer n, return true if it is a power of four. Otherwise, return false.
 An integer n is a power of four, if there exists an integer x such that n == 4x.*/

 #include<stdio.h>
 #include<stdbool.h>
 bool isPowerOfFour(int n) {
                         if(n<=0)
                         return false;
                         while(n%4==0)
                         {
                            n=n/4;
                         }
                         return n==1;
                         
    }

    int main()
    {
      int n=5;
      if(isPowerOfFour(n))
      {
        printf("true");
      }
      else{
              printf("false");
      }
      return 0;
    }

    /*  Input: n = 5
        Output: false*/