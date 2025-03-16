/*A phrase is a palindrome if, after converting all uppercase letters into 
lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool isPalindrome(char* s) {

                         int left = 0, right = strlen(s) - 1;
                     
                         while (left < right) {
                             
                             while (left < right && !isalnum(s[left])) {
                                 left++;
                             }
                             
                             while (left < right && !isalnum(s[right])) {
                                 right--;
                             }
                     
                         
                             if (tolower(s[left]) != tolower(s[right])) {
                                 return 0;  
                             }
                             
                             left++;
                             right--;
                         }
                     
                         return 1;  
  }
                     
  int main() {
                         char str[]="A man, a plan, a canal: Panama";
                     
                        
                     
;
                     
                         if (isPalindrome(str)) {
                             printf("True");
                         } else {
                             printf("False");
                         }
                     
                         return 0;
                     }
                     /*   Input: s = "A man, a plan, a canal: Panama"
                           Output: true
                           Explanation: "amanaplanacanalpanama" is a palindrome.*/