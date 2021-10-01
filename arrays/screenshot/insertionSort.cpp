#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i =1;i<n;i++)
   {
      int  value = arr[i];
       int hole = i-1;
       while(hole>=0 && arr[hole]>value)
       {
           arr[hole+1]=arr[hole];
           hole--;
       }
       arr[hole+1]=value;
   }
   cout<<"the sorted array is \n";
   for(int i=0 ;i<n;i++)

   {
     cout<<arr[i]<<" ";
   }
   return 0;
}