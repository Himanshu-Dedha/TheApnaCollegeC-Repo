#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows = ";
    int n;
    cin>>n;
    for(int b=1;b<=n;b++)
    {
        for(int a =1;a<=n-b;a++)
        {
            cout<<" ";
        }
        for(int r=1;r<=n;r++)
        {
             cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}