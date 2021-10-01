//find the sum of each subarray 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements of the array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr;
    for(int i =0;i<n;i++)
    {   
        curr = 0;
        for(int j=i;j<n;j++)
        {
         curr = curr+arr[j];           
         cout<<curr<<endl;
        }
    }
    return 0;
   /*here the following thing is done
   so the following ways are there to calculate the sum of a subarray 
   total groups that can be formed are like this 
   1 to n
   1 to (n-1)
   and so on till we get 
   1 to 2
   */
