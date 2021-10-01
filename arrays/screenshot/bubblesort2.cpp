#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements in the array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array \n ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter = 1;//the number of times the loop runs in the i'th iteration is n-i times. This counter is used to keep the track of i.
    while(counter<n)
    {
        for(int i=0 ;i<n-counter ;i++)
        {
         if(arr[i]>arr[i+1])
         {
             int temp = arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
         }
        }
        counter++;
    } 
    cout<<"the sorted array is \n";
    for(int i=0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;//this code was executed without any errors 

}