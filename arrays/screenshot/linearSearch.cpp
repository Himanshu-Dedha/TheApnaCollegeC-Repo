#include<iostream>
int linearSearch(int arr[],int n, int key);
using namespace std;
int main()
{   
    int n;
    cin>>n; 
    int arr[n];
    
    cout<<"enter the elements of the array ";
    for(int i =0 ;i<n;i++)
    {    cout<<"\n";
        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<< linearSearch(arr,n,key)+1<<endl;//+1 to give  the exact place of the element in the array
   return 0;

}
int linearSearch(int arr[],int n ,int key)
{
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==key)
        {
            return i ;
        }
    }
    return -1;//the time complexity of the linearsearch is directly proportional to n
}