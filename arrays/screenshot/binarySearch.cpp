#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key);
int main()
{
    int n,arr[n],key ;
    cout<<"the no. of elements in the array \n";
    cin>>n;
    cout<<"enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"enter the key ";
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}
int binarySearch( int arr[],int n,int key)
{int s=0;
int e=n;
while(s<=e)
{
    int mid =(s+e/2);
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        s=mid +1;
    }
    else
    {
        e=mid-1;
    }
}
return -1;
}