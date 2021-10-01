#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of days the park was open = ";
    cin>>n;
    int arr[n+1];
    cout<<"enter the attendance for the corresponding days = ";
    arr[n] = -1;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = 0;
    int mx= -1;
    for(int i =0;i<n;i++)
    {
        if(arr[i]>mx  && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);

    }
    cout<<"the total number of record breaker days are = "<<ans<<endl ;
    return 0;
    
}