/* Given two strings needle and haystack, return the index of the first occurrence of
   needle in haystack, or -1 if needle is not part of haystack.*/

   #include<stdio.h>
   #include<string.h>
   int strStr(char* haystack, char* needle) {
                         char* pos=strstr(haystack,needle);
                         if(pos!=NULL)
                            return pos-haystack;
                         return -1;
                         
  }

  int main()
  {
     char haystack[]= "sadbutsad", needle[] = "sad";
     int res=strStr(haystack,needle);
     if(res==(-1))
     {
        printf("-1");
     }
     else{
            printf("%d ",res);
     }
     return 0;
  }
                         
     /*Output: 0
     Explanation: "sad" occurs at index 0 and 6.
     The first occurrence is at index 0, so we return 0.*/
  