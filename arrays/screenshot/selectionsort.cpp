#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    int min,k,j,m;
    for(int i=0;i<n;i++)
    { 
        m=i;
        while(m<n)
        {
         if(min<arr[m])
         {
             min=arr[m];
             k=m;
             m++;
         }
        }
         j =arr[k];
         arr[k]=arr[i];
         arr[i]=j;  
     }
     cout<<"the sorted array is ";
     for(int a =0;a<n;a++)
     {
         cout<<arr[a]<<"\t";
     }
}
int main()
{
    cout<<"enter the number of elements in the array  \n";
    int f;
    cin>>f;
    int arr[f];
    cout<<"enter the elements in the array \n";
    int a=0;
    while(a<f)
    {
        cin>>arr[a];
        
    }a++;
    selectionSort(arr,f);
    return 0;
}