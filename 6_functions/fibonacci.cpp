#include<iostream>
using namespace std;
void fibonacci(int a)
{
    int t1=0;
    int t2=1;
    int nextterm;
    for(int n=1;n<=a;n++)
    {   
        cout<<t1<<"\n";
        nextterm= t1+t2;
        t1=t2;
        t2=nextterm;
       
    }
}

int main()
{
     cout<<"enter the number till which you want to continue the series = ";
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
    }
