/*    Given a string s consisting of words and spaces, return the length of the last word in the string.
      A word is a maximal substring consisting of non-space characters only.*/

#include<stdio.h>
#include<string.h>
      int lengthOfLastWord(char* s) {
                         int length=0;
                         int space=strlen(s)-1;
                         while(space>=0&&s[space]==' ')
                         {
                            space--;
                         }
                         while(space>=0&&s[space]!=' ')
                         {
                             length++;
                             space--;
                         }
                         return length;
                         
 }
 int main()
 {
    char s[]= "Hello World"; 
     int l=lengthOfLastWord(s);
     printf("%d",l);
     return 0; 
 }                   /*     Input: s = "Hello World"
                                         Output: 5
                         Explanation: The last word is "World" with length 5.*/
 