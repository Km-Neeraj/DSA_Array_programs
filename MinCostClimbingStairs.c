/*    You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
     You can either start from the step with index 0, or the step with index 1.
     Return the minimum cost to reach the top of the floor.*/
      #include<stdio.h>
     int minCostClimbingStairs(int* cost, int costSize) {
                         if(costSize==0)
                         return 0;
                         if(costSize==1)
                         return cost[0];
                         int first=cost[0];
                         int second=cost[1];
                         for(int i=2;i<costSize;i++)
                         {
                            int c=cost[i]+(first<second?first:second);
                            first=second;
                            second=c;
                         }
                         return (first<second)?first:second;
                         
  }
  int main()
  {
                        int cost[] = {1,100,1,1,1,100,1,1,100,1};
                        int n=sizeof(cost)/sizeof(cost[0]);
                        int res=minCostClimbingStairs(cost,n);
                        printf("%d",res);
                        return 0; 
  }

  /*     Input: cost = [1,100,1,1,1,100,1,1,100,1]
        Output: 6
        Explanation: You will start at index 0.
       - Pay 1 and climb two steps to reach index 2.
       - Pay 1 and climb two steps to reach index 4.
       - Pay 1 and climb two steps to reach index 6.
       - Pay 1 and climb one step to reach index 7.
       - Pay 1 and climb two steps to reach index 9.
       - Pay 1 and climb one step to reach the top.
          The total cost is 6.*/