/*You are climbing a staircase. It takes n steps to reach the top.
   Each time you can either climb 1 or 2 steps. In how many distinct ways can you 
   climb to the top?*/
    #include<stdio.h>
   int climbStairs(int n) {
                         if(n<=2)
                         {
                             return n;
                         }
                         int first=1,second=2,ways;
                         for(int i=3;i<=n;i++)
                         {
                            ways=first+second;
                            first=second;
                            second=ways;
                         }
                         return ways;
                         
  }
  int main()
  {
     int n=3;
     int res=climbStairs(n);
     printf("%d",res);
     return 0;
  }

/*   Input: n = 3
      Output: 3
      Explanation: There are three ways to climb to the top.
     1. 1 step + 1 step + 1 step
     2. 1 step + 2 steps
     3. 2 steps + 1 step*/