//find max and min using min number of comparisons
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    /* int maxnum = INT_MIN;
    int minnum = INT_MAX;
    for(int i = 0;i<n;i++)
    {
        if(maxnum<arr[i])
        {
            maxnum=arr[i];
        }
        if(minnum>arr[i])
        {
            minnum = arr[i];
        }
    }
    cout<<"the max and the min number are "<<maxnum<<" and "<<minnum<<endl;*/
    //the above one has the most number of comparisons 




    
    return 0;
}