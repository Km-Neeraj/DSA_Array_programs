/*  You have a long flowerbed in which some of the plots are planted, and some are not
    However, flowers cannot be planted in adjacent plots.Given an integer array 
    flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty,
     and an integer n, return true if n new flowers can be planted in the flowerbed
      without violating the no-adjacent-flowers rule and false otherwise.*/


#include<stdio.h>
#include<stdbool.h>
 bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

                         int count=0;
                         for(int i=0;i<flowerbedSize;i++)
                          {
                              if(flowerbed[i]==0)
                                 {
                                   int before=(i==0)?0:flowerbed[i-1];
                                    int after=(i==flowerbedSize-1)?0:flowerbed[i+1];
                                     if(before==0 && after==0)
                                                  {
                                                  flowerbed[i]==1;
                                                  count++;
                                                  if(count>=n)
                                                  {
                                                  return true;
                                                  }
                                                   i++;
                         }
 }
}
  return count>=n;
}

int main()
{
    int flowerbed[]={1,0,0,0,1,},n = 1;
    int Size=sizeof(flowerbed)/sizeof(flowerbed[0]);
    int res=canPlaceFlowers(flowerbed,Size,n);       //output=true;
    if(res==1)
    {
       printf("True");
    }
    else
    {
       printf("False");
    }
    return 0;
}

