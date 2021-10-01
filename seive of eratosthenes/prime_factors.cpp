#include<iostream>
using namespace std;
void primefactor( int n )
{
    int prime[100]={0};
    for(int i = 2 ;i<=n;i++)
    {
        prime[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==i)
        {
            for(int j = i*i;j<=n;j+=i)
            {
                if(prime[j]==j)//JAISE JAISE YE PROGRESS KAREGA WAISE WAISE JO BHI MULTIPLES HONGE UNME YE SMALLEST PRIME FACTOR BHAR DEGA 
                {
                    prime[j]=i;
                }

            }

        }

    }
    while(n!=1)
    {
        cout<<prime[n]<<" ";//this one most probably prints the number that was added to the numbers as the smallest prime factor 
        n=n/prime[n];
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<n<<"=";
    primefactor(n);
    return 0;
}