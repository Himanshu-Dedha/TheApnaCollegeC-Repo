#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int m=0;m<n-1;m++)
    {
        for(int k=m+1;k<n;k++)
        {   
            if(arr[k]<arr[m])
          { 
            int temp = arr[k];
            arr[k]=arr[m];
            arr[m]= temp;
          }
        }
    }
    cout<<"the sorted array is \n";
    for(int a=0 ;a<n;a++)
    {
        cout<<arr[a]<<" ";
    }
    return 0;
}