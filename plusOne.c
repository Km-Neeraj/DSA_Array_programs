/* You are given a large integer represented as an integer array digits,
 where each digits[i] is the ith digit of the integer. The digits are ordered from most 
 significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
   Increment the large integer by one and return the resulting array of digits.*/

   /**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include<stdio.h>
 #include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
                         int* result=(int*)malloc((digitsSize+1)*sizeof(int));
                         int carry=1;
                         for(int i=digitsSize-1;i>=0;i--)
                         {
                             int sum=digits[i]+carry;
                             result[i+1]=sum%10;
                             carry=sum/10;
                     
                         }
                         if(carry)
                         {
                             result[0]=1;
                             *returnSize=digitsSize+1;
                             return result;
                         }
                         else
                         {
                            *returnSize=digitsSize;
                            return result+1;
                         }
                         
                         
                     }
                     int main() {
                         int digits[] = {4,3,2,1};  // Example input
                         int digitsSize = sizeof(digits) / sizeof(digits[0]);
                         int returnSize;
                     
                         int* result = plusOne(digits, digitsSize, &returnSize);
                     
                         printf("Result: ");
                         for (int i = 0; i < returnSize; i++) {
                             printf("%d ", result[i]);
                         }
                         printf("\n");
                     
                         // Free allocated memory
                         if (returnSize > digitsSize) {
                             free(result);  // If new memory was allocated
                         } else {
                             free(result - 1);  // Adjust pointer to free original allocation
                         }
                     
                         return 0;
                     }

                     /*   Input: digits = [4,3,2,1]
                         Output: [4,3,2,2]
                        Explanation: The array represents the integer 4321.
                        Incrementing by one gives 4321 + 1 = 4322.
                         Thus, the result should be [4,3,2,2].*/