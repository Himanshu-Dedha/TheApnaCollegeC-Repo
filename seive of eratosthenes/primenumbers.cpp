#include<iostream>
using namespace std;
void sieveprime(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
      if(prime[i]==0)
      {
          for(int j=i*i;j<=n;j+=i)//i*i is used because when you map out this thing you will reallise that the numbers before the square should already be marked because their multiples have been marked before 
          {
           prime[j]=1;//1 for marked and 0 for unmarked 
          }
      } 
    }
      for(int i=2;i<=n;i++)
      {
          if(prime[i]==0)
          {
              cout<<i;
          }
          cout<<endl;
      }
    
    

}
int main()
{
    int n;
    cin>>n;
    cout<<"the prime numbers are "<<endl;
    sieveprime(n);
    return 0;
}