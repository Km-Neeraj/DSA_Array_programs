/*  The Tribonacci sequence Tn is defined as follows: 
        T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
      Given n, return the value of Tn.*/

      #include<stdio.h>
      int tribonacci(int n) {
                         int first=0,second=1,third=1,fourth;
                         if(n==0)
                         {
                           return 0;
                         }
                         if(n==1)
                         {
                           return 1;
                         }
                         if(n==2)
                         {
                            return 1;
                         }
                         for(int i=3;i<=n;i++)
                         {
                           fourth=first+second+third;
                           first=second;
                           second=third;
                           third=fourth; 
                         }
                         return fourth;
                         
 }

 int main()
 {
   int n=4;
   int res=tribonacci(n);
   printf("%d",res);
   return 0;
 }

 /*    Input: n = 4
       Output: 4
       Explanation:
       T_3 = 0 + 1 + 1 = 2
       T_4 = 1 + 1 + 2 = 4*/