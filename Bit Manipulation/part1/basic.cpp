#include<iostream>
using namespace std;
int Getbit(int a, int pos)
{
 return ((a & (1<<pos))!=0);//this right here will return 0 or 1 because it is a true or false situation if its true it means it is 1 else it is 0 hence the output is 1 or 0
}
int setbit(int a , int pos)
{
    return (a | (1<<pos));
}
int clearbit(int a , int pos )
{
    return (a & ~(1<<pos));
}
int updatebit(int a , int pos , int value)
{
    a= a & ~(1<<pos);
    return (a | (value<<pos));
}
int main() 
{
int a = 5;
int pos =2,pos1=1;
cout<<Getbit(a,pos)<<endl;
cout<<setbit(a,pos1)<<endl;// the binary number is 0111 i.e. 7
cout<<clearbit(a,pos)<<endl;//this is correct as well 
cout<<updatebit(a,pos1,1);
return 0;
}