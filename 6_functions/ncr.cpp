#include<iostream>
using namespace std;
int fact(int a)
{
    int fact=1;
    for(int r=1;r<=a;r++)
    {
        fact=fact*r;
    }
    return fact;
}
int ncr(int n,int r)
{
int a =fact(n)/(fact(n-r)*fact(r));
return a;
}
int main()
{
    int n,r;
    cout<<"enter n = ";
    cin>>n;
    cout<<"enter r = ";
    cin>>r;
    cout<<"the ncr is = "<<ncr(n,r)<<endl;
    return 0;
}