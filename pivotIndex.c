//Given an array of integers nums, calculate the pivot index of this array.
//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
//If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
//Return the leftmost pivot index. If no such index exists, return -1.

#include<stdio.h>
int pivotIndex(int* nums, int numsSize) {
                         int totalsum=0;
                         int leftsum=0;
                         for(int i=0;i<numsSize;i++)
                         {
                            totalsum+=nums[i];
                         }
                         for(int i=0;i<numsSize;i++)
                         {
                            if(leftsum==totalsum-leftsum-nums[i])
                            {
                              return i;
                            }
                            leftsum+=nums[i];
                         }
                         return -1;
                         
  }
  int main()
  {
                       int  nums[]= {1,7,3,6,5,6};   //Output: 3
                         int n=sizeof(nums)/sizeof(nums[0]);
                         int pivot=pivotIndex(nums,n);
                         printf("PivotIndex = %d",pivot);
                         return 0;
  }