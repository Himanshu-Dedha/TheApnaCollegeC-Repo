#include<iostream>
using namespace std;
/*void reversearray( int arr[], int n)
{
    for(int i=0;i<=(n/2);i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}*/
void reversearray2( int arr[], int n)
{
    for(int i=0;i<(n/2);i++)
    {
        arr[i]=arr[i]^arr[n-1-i];
        arr[n-1-i]=arr[i]^arr[n-1-i];
        arr[i]=arr[i]^arr[n-1-i];
       
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    void reversearray3( int a[], int n)
    {
        int i=0, j=n-1;
        while(i<j)
        {
            a[i]=a[i]^a[j];
            a[j]=a[i]^a[j];
            a[i]=a[i]^a[j];
            i++;
            j--;
        }
        for(int i = 0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

int main()
{
    int n= 6; 
    int arr[n]={1,2,3,4,5,6};
    
    reversearray2(arr,n);
    reversearray3(arr,n);
    
    int a = 1;
    int b= 2;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b; 
    return 0;
}