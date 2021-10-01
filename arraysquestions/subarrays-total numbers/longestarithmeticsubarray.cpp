#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the total number of elements in the array = ";
    cin>>n;
    cout<<"enter the elements of the array ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans =2;//intialized 2 because we have an array for the first two elements of the array i.e. 0&1
    int curr=2;//initialized 2 because we have the current length of the array as 2(1&0)
    int pd=arr[1]-arr[0];//prints the current difference 
    int j = 2; //the variable is set to 2 because we have already dealt with 0 and 1
    while(j<n)
    {
     if(pd==arr[j]-arr[j-1])
     {
         curr++;  //increases the current length of the subarray 
     }
     else
     {
         pd=arr[j]-arr[j-1];
         curr=2;//rollbacks the current length of the subarray to 2
     }
     j++;
     ans = max(ans,curr);
    }
    cout<<"the length of the longest arithmetic subarray is "<< ans;
    return 0;

}