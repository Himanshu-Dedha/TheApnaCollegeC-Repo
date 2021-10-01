#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number = ";
    cin>>n;
    for(int a =1;a<=n;a++)
    {
        for(int b=1;b<=n-a;b++)
        {
            cout<<"  ";
        
        }
        for(int v=1;v<=(2*a-1);v++)
        {
            cout<<"* ";
        
        }cout<<endl;

    }
    for(int z=n;z>=1;z--)
    {
        for(int a =1;a<=n-z;a++)
        {
            cout<<"  ";
        }
        for(int m=(2*z-1);m>=1;m--)
        {
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}