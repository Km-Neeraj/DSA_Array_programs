//You are given a 0-indexed integer array nums and a target element target.
//A target index is an index i such that nums[i] == target.
//Return a list of the target indices of nums after sorting nums in non-decreasing order. 
// If there are no target indices, return an empty list. The returned list must be sorted in increasing order.
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
 {
   return (*(int*)a-*(int*)b);  //sort array in non_decreasing order
 }
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
  qsort(nums,numsSize,sizeof(int),compare);
  int count=0;
  int* result=(int*)malloc(numsSize*sizeof(int));
  for(int i=0;i<numsSize;i++)
  {
      if(nums[i]==target)
      {
        result[count++]=i;
      }
  } 
  *returnSize=count;
  return result; 
}
int main() {
                         int nums[] = {1, 2, 5, 2, 3};  // Example input
                         int target = 2;
                         int numsSize = sizeof(nums) / sizeof(nums[0]);
                         int returnSize;
                     
                         int* result = targetIndices(nums, numsSize, target, &returnSize);
                     
                         // Print result
                         if (result != NULL) {
                             printf("Target indices: [");
                             for (int i = 0; i < returnSize; i++) {
                                 printf("%d", result[i]);
                                 if (i < returnSize - 1) {
                                     printf(", ");
                                 }
                             }
                             printf("]\n");
                     
                             free(result); // Free allocated memory
                         } else {
                             printf("No target indices found.\n");
                         }
                     
                         return 0;
  }