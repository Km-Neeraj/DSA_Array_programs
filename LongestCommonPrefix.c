
//Write a function to find the longest common prefix string
//  amongst an array of strings.
  //If there is no common prefix, return an empty string "".

#include<stdio.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
                         if(strsSize==0) return "";
                         static char prefix[2000];
                         strcpy(prefix,strs[0]);
                         for(int i=1;i<strsSize;i++)
                         {
                             int j=0;
                             while(prefix[j]&&strs[i][j]&&prefix[j]==strs[i][j])
                             {
                               j++;
                             }
                             prefix[j]='\0';
                             if(prefix[0]=='\0')
                             return "";
                     
                         }
                         return prefix;
}
int main()
{
    char* strs[]={"flower","flow","flight"};
    int len=sizeof(strs)/sizeof(strs[0]);
    char* str=longestCommonPrefix(strs,len);
    printf(" LongestCommonPrefix = %s ",str);       //output= fl
    return 0;
}