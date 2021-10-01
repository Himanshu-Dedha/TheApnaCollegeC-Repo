#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows and columns of the matrix ";
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the problem variable ";
    int l;
    cin>>l;
    if(l<=a[0][0] || l>=a[n-1][m-1])
    {
        cout<<"the variable isn't in the matrix";
    }
    else
    {
     int c=m-1,r=0,f=1;
     while(f)
     {
     if(l==a[r][c])
     {
     f=0;
     cout<<"yes the variable is in the matrix and the row and column number are "<<r<<" "<<c;
     }
     else if(l>a[r][c])
     {
         r++;
     }
     else
     {
         c--;
     }
     }
    }
    return 0;
}