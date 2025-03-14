/*   Given an integer array nums, return true if any value appears at least twice in
   the array, and return false if every element is distinct.*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
   int compare(const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
    if(numsSize<=1)
    {
       return false;
    }
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1])
        {
             return true;
        }
    }
    return false;
    
}

int main() {
                         int nums[] = {1, 2, 3, 1};  // Example input with duplicates
                         int numsSize = sizeof(nums) / sizeof(nums[0]);
                     
                         if (containsDuplicate(nums, numsSize)) {
                             printf("True");
                         } else {
                             printf("false");
                         }
                     
                         return 0;
                     }

                     /*   Input: nums = [1,2,3,1]

                          Output: true

                          Explanation:

                        The element 1 occurs at the indices 0 and 3.*/