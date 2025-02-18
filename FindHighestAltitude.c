//You are given an integer array gain of length n where gain[i] is the net gain in
//  altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). 
// Return the highest altitude of a point.
#include<stdio.h>
int largestAltitude(int* gain, int gainSize) {
                         int max_altitude=0;
                         int current_altitude=0;
                         for(int i=0;i<gainSize;i++)
                         {
                            current_altitude+=gain[i];
                            if(current_altitude>max_altitude)
                            {
                               max_altitude=current_altitude;
                            }
                         }
                         return max_altitude;
                         
}
int main()
{
   int arr[]={-5,1,5,0,-7};
   int n=sizeof(arr)/sizeof(arr[0]);
   int high=largestAltitude(arr,n);
   printf(" LargestAltitude = %d ",high);
   return 0;
}

//Output: 1
//Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.