#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num)
{
    for(int i = 2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"enter the numbers = ";
    cin>>a>>b;
    for(int i=a ;i<=b;i++)
    {
        if(prime(i))
        {
            cout<<"the numbers is/are "<<i<<endl;
        }
    }
    return 0;
}