#include<iostream>
using namespace std;
int octaltodecimal(int a)
{
    int ans = 0;
    int x=1;
    while(a>0)
    {
        int y= a%10;
        ans = ans + x*y;
        x=x*8;
        a=a/10;
    }
    return ans;
}
int main()
{
    int a ;
    cout<<"enter the octal number = ";
    cin>>a;
    cout<<"the decimal number is "<<octaltodecimal(a)<<endl;
    return 0;
}