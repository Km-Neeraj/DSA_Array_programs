//You are given a 0-indexed integer array nums and an integer k.
//Return an integer that denotes the sum of elements in nums whose corresponding indices have exactly k set bits in their binary representation.
//The set bits in an integer are the 1's present when it is written in binary.
#include<stdio.h>
int SetCountBits(int bits)
{
    int count=0;
    while(bits>0)
    {
        count+=(bits&1);
        bits=bits>>1;
    }
    return count;
   
}
int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        
       if(SetCountBits(i)==k)
       {
           sum+=nums[i];
       }
    }
    return sum;
}
int main()
{
   int  nums[] ={5,10,1,5,2}, k = 1;           
   int n=sizeof(nums)/sizeof(nums[0]);
   int result=sumIndicesWithKSetBits(nums,n,k);
   printf("Sum of values at indices with k set bits = %d ",result);
   return 0;
}

/*             Output: 13
              Explanation: The binary representation of the indices are: 
               0 = 0002
               1 = 0012
               2 = 0102
               3 = 0112
               4 = 1002 
            Indices 1, 2, and 4 have k = 1 set bits in their binary representation.
             Hence, the answer is nums[1] + nums[2] + nums[4] = 13.*/