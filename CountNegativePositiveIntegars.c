/*Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.
  In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
   Note that 0 is neither positive nor negative.*/
   #include<stdio.h>
   int maximumCount(int* nums, int numsSize) {
                         int c=0,count=0;
                         for(int i=0;i<numsSize;i++)
                         {
                             if(nums[i]==0)
                             {
                                continue;
                             }
                             if(nums[i]>0)
                             {
                                count++;
                             }
                             else 
                             {
                                c++;
                             }
                     
                         }
                         if(count>=c)
                         {
                           return count;
                         }  
                         else
                         {
                            return c;
                         }  
     }
     int main()
     {
                         int nums[]={-3,-2,-1,0,0,1,2}; 
                         int n=sizeof(nums)/sizeof(nums[0]);
                         int res=maximumCount(nums,n);
                         printf("%d",res);
                         return 0;
                                                            
     }
                     
     /*     Input: nums = [-3,-2,-1,0,0,1,2]
            Output: 3
           Explanation: There are 2 positive integers and 3 negative integers. 
           The maximum count among them is 3.
                                                */