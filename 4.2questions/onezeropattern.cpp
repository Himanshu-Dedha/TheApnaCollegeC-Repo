#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows =";
    cin>>n;
    for(int b=1;b<=n;b++) 
    {
        for(int a=1;a<=b;a++)
        {
            if((a+b)%2==0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
            
        }
        cout<<endl;
        return 0;

    }
}
