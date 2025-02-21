//You are a product manager and currently leading a team to develop a new product. 
// Unfortunately, the latest version of your product fails the quality check.
//  Since each version is developed based on the previous version, all the versions after a bad version are also bad.
//Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.


#include<stdio.h>
#include <stdbool.h>
#define isBad_Version 4
bool isBadVersion(int version)
{
return version>=isBad_Version;
}
int firstBadVersion(int n) {
    int low=1,high=n;
    while(low<high)
    {
       int mid=low+(high-low)/2;
       if(isBadVersion(mid))
       {
          high=mid;
       }
       else
       {
         low=mid+1;
       }
    }
    return low;
    
}
int main()
{
   int n=5;
   printf("Bad Version= %d",firstBadVersion(n));  //output=4
   return 0;
}