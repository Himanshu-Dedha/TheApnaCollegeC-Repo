#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows = ";
    int n;
    cin>>n;
    for(int a =1;a<=n;a++)
    {
        for(int b=1;b<=n-a;b++)
        {
            cout<<" ";
        }
        for(int v=1;v<=a;v++)
        {
            cout<<v<<" ";
    
        }
        for(int b=1;b<=n-a;b++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
    return 0;
}