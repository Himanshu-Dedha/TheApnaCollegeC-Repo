#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int b =1;b<=n;n++)
    {
        for(int a =1;a<n-b;a++)
        {
            cout<<" ";
        }
        for(int z=b;z>0;z--)
        {
            cout<<" z";
        }
        for(int f=2;f<=b;f++)
        {
            cout<<" f";
        }
        cout<<endl;
    }
    return 0;
}