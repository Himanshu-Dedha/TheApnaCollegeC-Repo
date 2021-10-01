#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for( int b=1;b<=n;b++)
    {
        for(int v=1;v<=n-b;v++)
        {
            cout<<" ";
        }
        for(int a=b;a>0;a--)
        {
            cout<<a;
        
        }
        for(int f=2;f<=b;f++)
        {
            cout<<f;
        
        }
        cout<<endl;
    }
    return 0;
}