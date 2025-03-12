/*   You are given an integer array nums where the largest integer is unique.
  Determine whether the largest element in the array is at least twice as much as
   every other number in the array. If it is, return the index of the largest element, 
   or return -1 otherwise.*/
#include<stdio.h>
int dominantIndex(int* nums, int numsSize) {
                         int big=nums[0];
                         int count=0;
                         int index=0;
                         
                         for(int i=1;i<numsSize;i++)
                         {
                            if(nums[i]>big)
                            {
                               big=nums[i];
                               index=i;
                            }
                     
                         }
                         for(int i=0;i<numsSize;i++)
                         {
                            if(big>=(2*nums[i])||big==nums[i])
                            {
                              count++;
                            }
                         }
                         if(count==numsSize)
                         {
                            return index;
                         }
                         else
                         {
                            return -1;
                         }
                     
 }
 int main()
 {
    int nums[]={3,6,1,0};
    int n=sizeof(nums)/sizeof(nums[0]);
    int res=dominantIndex(nums,n);
    printf("%d",res);
    return 0;
 }

     /*    Input: nums = [3,6,1,0]
            Output: 1
            Explanation: 6 is the largest integer.
            For every other number in the array x, 6 is at least twice as big as x.
            The index of value 6 is 1, so we return 1.*/
 