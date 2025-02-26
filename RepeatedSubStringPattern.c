
/* Given a string s, check if it can be constructed by taking a substring of it
  and appending multiple copies of the substring together.*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool repeatedSubstringPattern(char* s) {
                         int len=strlen(s);
                         if(len<=1)
                         {
                           return false;
                         }
                         char temp[2*len+1];
                         strcpy(temp,s);
                         strcat(temp,s);
                         temp[2*len-1]='\0';
                         if(strstr(temp+1,s)!=NULL)
                         {
                             return 1;
                         }
                         else
                         {
                            return 0;
                         }
                         
}
int main()
{
    char ch[]="abab";
    bool res=repeatedSubstringPattern(ch);     //output=true
    if(res==1)
    {
      printf("true");
    }
    else{
          printf("false");
    }
    return 0;
    
}