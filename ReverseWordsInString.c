/* Given an input string s, reverse the order of the words.
   A word is defined as a sequence of non-space characters.
   The words in s will be separated by at least one space.
   Return a string of the words in reverse order concatenated by a single space.
  Note that s may contain leading or trailing spaces or multiple spaces between 
  two words. The returned string should only have a single space separating the words. 
    Do not include any extra spaces.               */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverseWords(char* s) {
                         int len=strlen(s);
                         char* words[1000];
                         int i=0,count=0;
                         while(i<len)
                         {
                             while(i<len&&s[i]==' ')
                             {
                                  i++;
                             }
                             if(i==len)
                             {
                                    break;
                             }
                             int start=i;
                             while(i<len&&s[i]!=' ')
                             {
                                i++;
                             }
                             int words_len=i-start;
                             words[count]=(char*)malloc(words_len+1);
                             strncpy(words[count],s+start,words_len);
                             words[count][words_len]='\0';
                             count++;
                         }
                         char* result=(char*)malloc(len+1);
                         result[0]='\0';
                         for(int j=count-1;j>=0;j--)
                         {
                            strcat(result, words[j]);
                             if (j > 0) {
                                 strcat(result, " ");
                             }
                             free(words[j]);  // Free memory for each word
                         }
                         return result;
  }
  int main()
  {
     char ch[]="a good   example";      //output= "example good a"
     char* res=reverseWords(ch);
     printf("Reverse Words = %s ",res);
     return 0;

  }