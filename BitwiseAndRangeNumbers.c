/*   Given two integers left and right that represent the range [left, right],
 return the bitwise AND of all numbers in this range, inclusive.*/
#include<stdio.h>
 int rangeBitwiseAnd(int left, int right) {
                         while(left<right)
                         {
                             right=right&(right-1);
                         }
                         return left&right;
                         
 }
 int main()
 {
    int left=5,right=7;
    int res=rangeBitwiseAnd(left,right);
    printf("%d",res);
    return 0;
                         /*Input: left = 5, right = 7
                         Output: 4*/
 }