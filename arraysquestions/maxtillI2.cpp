#include<iostream>
#include<climits>
using namespace std;
void maxtillI(int arr[], int n)
{
    int mx = INT_MIN;
    for(int i =0 ;i<n;i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<endl;

    }
}
int main()
{
    int n;
    cout<<"enter the total elements of the array ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxtillI(arr,n);
    return 0;
}