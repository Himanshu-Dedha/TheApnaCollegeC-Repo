#include<iostream>
using namespace std;
void triplet(int a,int b, int c)
{
if((a*a+b*b)==(c*c) || (a*a+c*c)==(b*b) || (b*b+c*c)==(a*a))
{
    cout<<"they are pythagorean triplets !!"<<endl;

}
else
{
    cout<<"no they are not pythagorean triplets!!"<<endl;
}
return;
}
int main()
{
    int a,b,c;
    cout<<"enter the first number = ";
    cin>>a;
    cout<<"enter the second number = ";
    cin>>b;
    cout<<"enter the third number = ";
    cin>>c;
    triplet(a,b,c);
    return 0;
}
