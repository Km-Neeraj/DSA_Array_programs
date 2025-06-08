#include<stdio.h>
int Slargest(int arr[],int n)
{
                         int largest=-1,sLargest=-1;

                         for(int i=0;i<n;i++)
                         {
                                                  if(arr[i]>largest)
                                                  {
                                                                           sLargest=largest;
                                                                           largest=arr[i];
                                                  }
                                                  else if(arr[i]<largest&&arr[i]>sLargest)
                                                  {
                                                                           sLargest=arr[i];
                                                  }
                         }
                         return sLargest;

}

int main()
{
                         int arr[]={10,23,56,-99,6};
                         int n=sizeof(arr)/sizeof(arr[0]);
                         printf("Second Largest element = %d",Slargest(arr,n));
                         return 0;
}