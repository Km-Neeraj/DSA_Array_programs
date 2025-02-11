#include<stdio.h>
void productExceptSelf(int arr[],int n,int res[])
{
    int preProduct[n],suffProduct[n];
    preProduct[0]=1;
    for(int i=1;i<n;i++)
    {
      preProduct[i]=arr[i-1]*preProduct[i-1];

    }
    suffProduct[n-1]=1;
    for(int j=n-2;j>=0;j--)
    {
       suffProduct[j]=arr[j+1]*suffProduct[j+1];

    }
    for(int i=0;i<n;i++)
    {
      res[i]=preProduct[i]*suffProduct[i];
    }
    
}
int main()
{
   int arr[]={10,3,5,6,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int res[n];
   productExceptSelf(arr,n,res);
   for(int i=0;i<n;i++)
   {
      printf("%d ",res[i]);
   }
   return 0;
}