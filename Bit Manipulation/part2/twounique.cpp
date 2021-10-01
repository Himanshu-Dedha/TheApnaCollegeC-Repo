#include<iostream>
using namespace std;
int setBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);//remember the brackets, these are the most important(the error in output was due to the misplacement of the brackets)
}
void unique(int arr[],int n)
{   
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum= xorsum^arr[i];
    }
    int tempxor= xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1) //this loop is to determine the position of the right most set bit
    {
        setbit=xorsum & 1;
        pos++;
        xorsum= xorsum>>1;//we could've used the >>> because it will initialise the bits with 0 and not dependant on the MSB

    }
    int newxor=0;
    for(int i=0;i<n;i++)//finding the xor of all the numbers with the setbit at the positon found 
    {
        if(setBit(arr[i],(pos-1)))
        {
            newxor=newxor^arr[i];
        }
    }
    cout<<"the first one is "<<newxor<<endl;
    cout<<"the second one is "<<(newxor^tempxor)<<endl;

}
int main()
{
    int n= 8;
    int arr[n]={1,2,3,5,7,1,2,3}  ; 
    unique(arr,n);
    return 0;
}