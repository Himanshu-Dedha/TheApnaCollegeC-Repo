#include<iostream>
using namespace std;
struct  pair //structure that returns the min and the max value
{
 int min;
 int max; //by default public therefore everyone can access them 
};

struct getminmax( int arr[], int n)//function which returns a structure
{
    struct pair minmax;
    int i;
    if(n==1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    else if(n==2)   
    {
        if(arr[0]>arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];

        }
        else 
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
    }
    
     
         for(i=0;i<n;i++)
         {

         }
     

}
int main()
{
    return 0;
}