#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array \n";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int l=1;l<n;l++)
    {
        for(int i=0 ;i<n;i++)
        {
         if(arr[i]>arr[i+1])
         {
             int temp = arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
         }
         else
         {

         
          continue;
         }
        }
    }
    cout<<"the sorted array is \n";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}//this program is succesfully running and sorting 