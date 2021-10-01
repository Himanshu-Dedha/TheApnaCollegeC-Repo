#include<iostream>
using namespace std;
int main()
{
    int n,a,f;
    cout<<"enter the number of elements in the array = ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }
    for(int m=0;m<n-1;m++)
    {
     if(array[m]<array[m+1])
     {

         a=array[m+1];//this code is wrong,because it will always select between the two adjacent numbers and not all the numbers 
     
     }
     else
     {
        
         a=array[m];
         
     }

     }
     cout<<"the largest number is = "<<a<<endl;
     for(int m=0;m<n-1;m++)
    {
     if(array[m]>array[m+1])
     {

         f=array[m+1];
     
     }
     else
     {
        
         f=array[m];
         
     }

     }
     cout<<"the smallest number is = "<<f<<endl;

     return 0;
}