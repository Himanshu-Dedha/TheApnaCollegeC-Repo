#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=n+1-a;b++)
        {
            cout<<b<<" ";
    }
    cout<<endl;
    }
    return 0;
}