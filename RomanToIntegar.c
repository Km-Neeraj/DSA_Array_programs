//program to convert into Integar from Roman Numbers
#include<stdio.h>
#include<string.h>
int getValue(char ch)
{
    switch(ch)
    {
       case 'I':
         return 1;
        case 'V':
          return 5;
        case 'X':
          return 10;
        case 'L':
          return 50;
         case 'C':
           return 100;
          case 'D':
            return 500;
          case 'M':
            return 1000;
            default:
            return 0;
    }
}


int romanToInt(char* s) {
    int total=0;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
       int current_val=getValue(s[i]);
       int next_Val=getValue(s[i+1]);
       if(next_Val>current_val)
       {
        total+=(next_Val-current_val);
        i++;
       }
       else{
              total+=current_val ;
       }
        
        }
       
    return total;
    
}
int main()
{
   char ch[]="MCMXCIV";          //Output: 1994
   long int res=romanToInt(ch);
   printf("  converted integar from roman(MCMXCIV) =  %ld ",res); 
   return 0;                    //Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.


}