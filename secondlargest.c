
  #include<stdio.h>
  int main()
  {
      int arr[]={-11,66,89,34,0,22};
     int largest=arr[0];
       int i, slargest=-1;
       for(i=0;i<6;i++)
       {
          if(arr[i]>largest)
          {
            largest=arr[i];             
          }               
       }
       for(i=0;i<6;i++)
       {
           if(arr[i]<largest&&arr[i]>slargest) 
           {
               slargest=arr[i];
           }                 
       }
       printf("largest element in an array = %d ",largest);
       printf("\n Second largest element in an array = %d ",slargest);
  return 0;
  }