//Given an array of integers arr, return true if the number of occurrences 
// of each value in the array is unique or false otherwise.


#include<stdio.h>
#include<stdbool.h>
#define MAX 2001

bool uniqueOccurrences(int* arr, int arrSize) {
    int freq[MAX]={0};
    int countArray[MAX]={0};
    for(int i=0;i<arrSize;i++)
    {
        freq[arr[i]+1000]++;
    }
    for(int i=0;i<MAX;i++)
    {
        if(freq[i]>0)
        {
            if(countArray[freq[i]]>0)
            return false;
        } 
        countArray[freq[i]]=1;
    }
    return true;
    
}
int main()
{
    int arr[]={1,2,2,1,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(uniqueOccurrences(arr,n))
    {
       printf("true\n");
    }
    else{
           printf("false");
    }
    return 0;   
}                  
//outpt: true    
//Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. 
// No two values have the same number of occurrences.
