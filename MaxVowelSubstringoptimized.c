#include<stdio.h>
#include<string.h>
int isVowel(char ch)
{
return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}


int maxVowels(char* s, int k) {
int n=strlen(s);
int max_count=0,current_count=0;
for(int i=0;i<k;i++)
{
    if(isVowel(s[i]))
    current_count++;
}
max_count=current_count;
for(int i=k;i<n;i++)
{
    if(isVowel(s[i])) current_count++;
    if(isVowel(s[i-k])) current_count--;

    if(current_count>max_count)
    max_count=current_count;
}
return max_count;

}
int main()
{
    char ch[]="abciiidef";  //possible substring of 3 = abc,bci,cii,iii,iid,ide,def
    int k=3;
    int max_vowel=maxVowels(ch,k);
    printf("Maximum number of vowel = %d ",max_vowel);  // max length of vowel=3 having substring "iii"
    return 0;                                           
}