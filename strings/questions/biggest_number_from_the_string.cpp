#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a = "41057840";
    /*
    sort(a.begin(),a.end());
    cout<<a<<endl;
    for(int i =0;i<(a.size()/2);i++)
    {
        int temp = a[i];
        a[i]=a[a.size()-1];
        a[a.size()-1]=temp;

    }
    cout<<a<<endl;
    */
   //the above code returned some errors 
   //this is the argument that will  sort in the descending order 
   sort(a.begin(),a.end(),greater<int>());
   cout<<a<<endl;//ran perfectly
    return 0;
}