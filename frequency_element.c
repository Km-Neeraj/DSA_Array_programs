
   #include<stdio.h>
   int main()
   {
      int n,i,j,count;
      printf("Enter the size of an array\n");
      scanf("%d",&n);
      int arr[n],visited[n];
      printf("Enter the array elements\n");
      for(i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
         visited[i]=0;
      }
      for(i=0;i<n;i++)
      {
          if(visited[i]==1)
          {
               continue;
          }
       count=1;
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
              count++;
              visited[j]=1;
           }
       }
       printf("\nFrequency of %d is: %d ",arr[i],count);
      }
      return 0;
   }