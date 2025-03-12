//Given an array arr of integers, check if there exist two indices i and j such that :
//i != j
//0 <= i, j < arr.length
//arr[i] == 2 * arr[j]
#include<stdio.h>
#include<stdbool.h>
bool checkIfExist(int* arr, int arrSize) {
                         int j=arrSize-1;
                         for(int i=0;i<arrSize;i++)
                         {
                             for(int j=0;j<arrSize;j++)
                             {
                                if(i!=j&& arr[i]==2*arr[j])
                                {
                                 return 1;
                                }
                             }
                         }
                         return 0;
 }
 int main()
 {
       int arr[]={10,2,5,3};
       int n=sizeof(arr)/sizeof(arr[0]);
       int res=checkIfExist(arr,n);
       if(res=1)
       {
          printf("True");
       }
       else
       {
           printf("false");
       }
       return 0;
 }
                         //Input: arr = [10,2,5,3]
                         //Output: true
//Explanation: For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]                    

                         
                     