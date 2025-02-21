  //Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
   //If target is not found in the array, return [-1, -1].

   #include<stdio.h>
   #include<stdlib.h>
   int FirstOccurences(int* nums,int numsSize,int target)
 {
   int low=0,high=numsSize-1,first=-1;
   while(low<=high)
   {
     int mid=low+(high-low)/2;
     if(nums[mid]==target)
     {
        first=mid;
        high=mid-1;
     }
     else if(nums[mid]<target)
     {
       low=mid+1;
     }
     else
     {
       high=mid-1; 
     }
   }
   return first;
 }
 int LastOccurences(int* nums,int numsSize,int target)
 {
   int low=0,high=numsSize-1,last=-1;
   while(low<=high)
   {
     int mid=low+(high-low)/2;
     if(nums[mid]==target)
     {
         last=mid;
         low=mid+1;
     }
     else if(nums[mid]<target)
     {
        low=mid+1;
     }
     else
     {
        high=mid-1;
     }
   }
   return last;
 }
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int* result=(int*)malloc(2*sizeof(int));
    result[0]=FirstOccurences(nums,numsSize,target);
    result[1]=LastOccurences(nums,numsSize,target);
    return result;
    
}
int main()
{
  int nums[]={5,7,7,8,8,10}, target = 8;   //output=[3,4]
  int n=sizeof(nums)/sizeof(nums[0]);
  int returnSize;
  int* result=searchRange(nums,n,target,&returnSize);
  printf("[ %d, %d ] ",result[0],result[1]);
  return 0;
}