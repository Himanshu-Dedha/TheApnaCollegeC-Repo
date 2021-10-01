#include<iostream>
using namespace std;
bool ispowerof2(int n)
{
    return(n && !(n & n-1));//this n is added to  the and operator because it is a corner case and they werent able to explain this one properly
}//removed the case for 0 and it doesn't really work now shows that it is a power of 2 
int main()
{
    int n=0;
    cout<<ispowerof2(n);//works perfectly fine 
    return 0;
}