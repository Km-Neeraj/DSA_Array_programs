#include<stdio.h>
int main()
{
int arr1[] = {1, 2, 3, 4, 5}; // Declaration 1
int arr2[5] = {1, 2, 3}; // Declaration 2
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
        int n2 = sizeof(arr2) / sizeof(arr2[0]);

        for(int i=0;i<n1;i++)
        {
                         printf("%d",arr1[i]);
        }
        for(int i=0;i<n2;i++)
        {
              printf("%d",arr2[i]);
        }
        return 0;


}