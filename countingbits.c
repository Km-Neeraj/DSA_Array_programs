//Given an integer n, return an array ans of length n + 1 such that for each 
// i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 #include<stdlib.h>
int* countBits(int n, int* returnSize) {
    *returnSize=n+1;
    int* ans=(int*)malloc((*returnSize)*sizeof(int));
    ans[0]=0;
    for(int i=1;i<=n;i++)
    {
        ans[i]=ans[i>>1]+(i&1);
    }
    return ans;
}
int main()
{
   int  n = 2;
   int returnSize;
   int* result=countBits(n,&returnSize);
   printf("[");
   for(int i=0;i<returnSize;i++)
   {
      printf("%d ",result[i]);
      if(i<returnSize-1) 
        printf(",");
   }
   printf("]");
   free(result);

    return 0;                                   /*Output: [0,1,1]
                                         Explanation:
                                          0 --> 0
                                          1 --> 1
                                          2 --> 10*/
                         
}