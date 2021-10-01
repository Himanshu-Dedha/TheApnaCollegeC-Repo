#include<iostream>
using namespace std;
int main()
{
    int p =10;
    int f = 9;
    int *a= &p;
    int *b=&f;
    cout<<a<<endl;//a stores the address of p
    cout<<&a<<endl;//this shows us the address of a 
    cout<<&p<<endl;//address of p
    cout<<a+b;//turned out to be an invalid operation just as expected
    return 0;
}