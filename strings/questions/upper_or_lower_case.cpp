#include<iostream>
#include<string>
using namespace std;
int main()
{
string a = "sdfhafhaifrifah";
//converting in uppercase 
for(int i = 0 ;i<a.length();i++)
{
    if(a[i]>='a' && a[i]<='z')
    {
        a[i]-=32;
    }
}
cout<<a<<endl;//correct output
return 0;
//similarly if there are mixed cases in the string it'll still  work if we want it to convert to a specific case 
}