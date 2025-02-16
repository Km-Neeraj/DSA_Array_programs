//You are given an integer array nums consisting of n elements, and an integer k.
//Find a contiguous subarray whose length is equal to k that has the maximum average
//  value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

#include<stdio.h>
double findMaxAverage(int* nums, int numsSize, int k) {
                         double max_sum=0,curr_sum=0;
                         for(int i=0;i<k;i++)
                         {
                            curr_sum=curr_sum+nums[i];
                         }
                         max_sum=curr_sum;
                         for(int i=k;i<numsSize;i++)
                         {
                            curr_sum=curr_sum+nums[i]-nums[i-k];
                            if(curr_sum>max_sum)
                            {
                               max_sum=curr_sum;
                            }
                         }
                         return max_sum/k;
}
int main()
{
    int arr[]={1,12,-5,-6,50,3};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    double average=findMaxAverage(arr,n,k);
    printf("MaxSubarrayAverage = %.5lf",average);
    return 0;
}