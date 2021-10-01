#include<iostream>
#include<iomanip>
int xorsum(int arr[],int n)
{
    int xorsum = 0;
    for(int i =0 ;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
using namespace std;

int main()
{   int n =7;
    int arr[7]={1,2,3,4,1,2,3};
    cout<<xorsum(arr,n)<<endl;
    return 0;
}