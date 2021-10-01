#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n][n],m[n][n];
    for(int i =0 ;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
             m[j][i] = a[i][j];
            
        }
    }
     for(int i =0 ;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
    }
 //using only one array also the apna college solution
  
  
  for(int i=0;i<n;i++)
 {
     for(int j=i;j<n;j++)
     {
      int f = a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=f;
     }
 }
 for(int i =0 ;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}