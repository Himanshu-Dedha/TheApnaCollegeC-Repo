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
void pascal(int r)
{
    for(int n=0;n<=r;n++)
    {
        for(int m=0;m<=n;m++)
        {
            cout<<ncr(n,m)<<" ";
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int r;
    cout<<"enter the number of rows = ";
    cin>>r;
    cout<<"the pascal's triangle is = \n";
    pascal(r);
    return 0;

}