#include<iostream>
using namespace std;
int hexatodecimal(int a)
{
    int ans = 0;
    int x=1;
    while(a>0)
    {
        int y= a%10;
        ans = ans + x*y;
        x=x*16;
        a=a/10;
    }
    return ans;
}
int main()
{
    int a ;
    cout<<"enter the hexal number = ";
    cin>>a;
    cout<<"the decimal number is "<<hexatodecimal(a)<<endl;
    return 0;
}