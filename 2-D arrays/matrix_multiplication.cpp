#include<iostream>
using namespace std;//this one is not a really good one 
int main()
{
    int n,m,l;
    cout<<"enter the numbers of rows and columns ";
    cin>>n>>m>>l;
    int a[n][m],b[m][l];
    cout<<"enter the first matrix ";
   
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j = 0;j<l;j++)
        {
            cin>>b[i][j];
        }
    }
    int x[n][l];
    for(int i= 0 ;i<n;i++)//read the register to better understand this one 
    {
        for(int j= 0;j<l;j++)
    {
        for(int k=0;k<m;k++)
        {
            x[i][j]+=a[i][k]*b[k][l];
        }    
    }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<x[i][j];
        }
    }
    return 0;
}