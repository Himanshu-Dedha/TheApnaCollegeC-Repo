#include<iostream>
#include<climits>
using namespace std;
void maxtillI(int arr[], int n)
{
    int Max=INT_MIN;
    for(int i=0;i<n;i++)//the problem here is that if iteration takes place till n , it'll start showing garbage value
    {
        Max=max(arr[i],arr[i+1]);
        cout<<" till "<<i<<" "<<Max;//not sure how i'm supposed to deal with the numbers at the end and the beginning
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