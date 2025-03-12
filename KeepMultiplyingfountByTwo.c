//You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.
//You then do the following steps:
//If original is found in nums, multiply it by two (i.e., set original = 2 * original).
//Otherwise, stop the process.
//Repeat this process with the new number as long as you keep finding the number.
//Return the final value of original.
#include<stdio.h>
int findFinalValue(int* nums, int numsSize, int original) {
                         for(int i=0;i<numsSize;i++)
                         {
                            for(int j=i+1;j<numsSize;j++)
                            {
                                if(nums[i]>nums[j])
                                {
                                    int temp=nums[i];
                                    nums[i]=nums[j];
                                    nums[j]=temp;
                                }
                            }
                         }
                         for(int i=0;i<numsSize;i++)
                         {
                            if(nums[i]==original)
                            {
                                original=2*nums[i]; 
                            }
                         }
                         return original;
                     }
int main()
{
      int nums[]={5,3,6,1,12};
      int n=sizeof(nums)/sizeof(nums[0]);
      int original=3;
      int res=findFinalValue(nums,n,original);
      printf("%d ",res);
      return 0;
                         /*Input: nums = [5,3,6,1,12], original = 3
                         Output: 24
                         Explanation: 
                         - 3 is found in nums. 3 is multiplied by 2 to obtain 6.
                         - 6 is found in nums. 6 is multiplied by 2 to obtain 12.
                         - 12 is found in nums. 12 is multiplied by 2 to obtain 24.
                         - 24 is not found in nums. Thus, 24 is returned.*/
}