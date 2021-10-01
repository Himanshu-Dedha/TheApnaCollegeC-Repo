#include<iostream>
using namespace std;
int sum(int a)
{
    int r=0;
    for(int m=1;m<=a;m++)
    {
        r+=m;
    }
    return r;
}
int main()
{
    cout<<"enter the last number = ";
    int a;
    cin>>a;
    cout<<"the sum is = ";
    cout<<sum(a)<<endl;
    return 0;

}
