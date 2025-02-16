  #include<stdio.h>
  #include<string.h>
  int maxSubstringVowel(char ch[],int len,int k)
  {
      int count,max_vowel=0,n;
      for(int i=0;i<len;i++)
      {
             n=0,count=0;
         for(int j=i;n<k;j++)
         {
            if(ch[j]=='a'||ch[j]=='e'||ch[i]=='i'||ch[j]=='o'||ch[j]=='u')
            {
                   count++;
            }
            n++;
         }
         if(count>max_vowel)
         {
           max_vowel=count;
         }
      }
      return max_vowel;
  }
  int main()
  {
    char ch[]="abciiidef";     //possible 3 substring = abc,bci,cii,iii,iid,ide,def
    int k=3;
    int len=strlen(ch);
    int m=maxSubstringVowel(ch,len,k);
    printf("Maximum number of vowel in substring = %d",m);   //iii substring has maximum number of vowel i.e,3
    return 0;
  }