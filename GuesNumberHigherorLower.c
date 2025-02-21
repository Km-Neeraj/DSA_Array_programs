//We are playing the Guess Game. The game is as follows:
//I pick a number from 1 to n. You have to guess which number I picked.
//Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

#include<stdio.h>
#define PICKED_NUMBER 6
int guess(int num)
{
   if(num==PICKED_NUMBER) return 0;
   else if(num>PICKED_NUMBER) return -1;
   else return 1; 
}
int guessNumber(int n){
                         int low=1,high=n;
                         while(low<=high)
                         {
                           int mid=low+(high-low)/2;
                           int res=guess(mid);
                           if(res==0)
                           {
                             return mid;
                           }
                           else if(res==-1)
                           {
                            high=mid-1;
                           }
                           else
                           {
                                low=mid+1;
                           }
                         }
                         return -1;
                                              
  }
  int main()
  {
                      int   n = 10;
                      int res=guessNumber(n);
                      printf("Output=%d",res);  //output=6
                      return 0;
  }