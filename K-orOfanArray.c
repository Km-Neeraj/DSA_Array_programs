 //You are given an integer array nums, and an integer k. Let's introduce 
 // K-or operation by extending the standard bitwise OR. 
 // In K-or, a bit position in the result is set to 1 if at least k numbers 
 // in nums have a 1 in that position Return the K-or of nums.
 #include<stdio.h>
 int findKOr(int* nums, int numsSize, int k) {
                         long int result=0;
                         for(long int bit=0;bit<32;bit++)
                         {
                            long int count=0;
                            for(long int i=0;i<numsSize;i++)
                            {
                               if(nums[i]&(1U<<bit))
                               {
                                  count++;
                               }
                            }
                            if(count>=k){
                              result|=(1<<bit);
                            }
                         }
                         return result;
   }
   int main()
   {
      int nums[]={7,12,9,8,9,15}, k = 4;
      int n=sizeof(nums)/sizeof(nums[0]);
      int result=findKOr(nums,n,k);
      printf("K-or of an array = %d",result);
      return 0;
   }

  /*Output: 9

Explanation:

Represent numbers in binary:

Number	Bit 3	Bit 2	Bit 1	Bit 0
7	0	1	1	1
12	1	1	0	0
9	1	0	0	1
8	1	0	0	0
9	1	0	0	1
15	1	1	1	1
Result = 9	1	0	0	1
Bit 0 is set in 7, 9, 9, and 15. Bit 3 is set in 12, 9, 8, 9, and 15.
Only bits 0 and 3 qualify. The result is (1001)2 = 9.*/

 