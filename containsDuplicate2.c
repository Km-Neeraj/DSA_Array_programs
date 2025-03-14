/* Given an integer array nums and an integer k, return true if there are two distinct
 indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.*/

 #include <stdio.h>
#include <stdbool.h>

bool containsNearbyDuplicate(int* nums, int numsSize, int k);

int main()
 {
    int nums[] = {1, 2, 3,1};  // Example array
    int numsSize = sizeof(nums) / sizeof(nums[0]);  
    int k = 3;  // Maximum allowed index difference

    if (containsNearbyDuplicate(nums, numsSize, k)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
 }

 int compare(const void* a, const void* b)
{
    return(*(int*)a-*(int*)b);
}
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    if(numsSize<2||k==0)
    {
      return false;
    }
    //qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize;i++)
    {
       for(int j=i+1;j<=i+k&&j<numsSize;j++)
       {
       if(nums[i]==nums[j])
       {
           return true;
       }
       }
    }
    return false;
}

/*   input: nums = [1,2,3,1], k = 3
      Output: true*/