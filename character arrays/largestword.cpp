#include<iostream>
using namespace std;
int main()
{
    char arr[200];
    cin>>arr;
    int i=0,f=0;
    while(arr[i]!='\0')
    {   i++;
        int m = 0;
        if(arr[i]!=' ')
        m++;
        if(m>f)
        {
            f=m;
        }
        if(arr[i]==' ')
        continue;
        
    }
    cout<<"the length of the largest element is "<<f;
    return 0;
}