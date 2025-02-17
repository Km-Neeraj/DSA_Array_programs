//Given a binary array nums and an integer k, return the maximum number of 
// consecutive 1's in the array if you can flip at most k 0's.
#include<stdio.h>
int longestOnes(int* nums, int numsSize, int k) {
                         int left=0,right;
                         int zeroCount=0;
                         int max_length=0;
                         for(right=0;right<numsSize;right++)
                         {
                            if(nums[right]==0)
                            {
                               zeroCount++;
                            }
                         
                         while(zeroCount>k)
                         {
                            if(nums[left]==0)
                            {
                               zeroCount--;
                            }
                            left++;
                         }
                         max_length=(right-left+1)>max_length?(right-left+1):max_length;
                     }
                     return max_length;
 }
 int main()
 {
    int nums[] ={1,1,1,0,0,0,1,1,1,1,0}, k = 2; 
    int n=sizeof(nums)/sizeof(nums[0]);    
      int res=longestOnes(nums,n,k);
      printf("LongestConsecutiveOnes = %d",res);     //Output: 6
      return 0;
 }