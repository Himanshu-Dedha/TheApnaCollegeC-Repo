#include<iostream>
using namespace std;
int main()
{
    for(int n =1;n<101;n++)
     {
         if(n%3==0 && n%5==0)
         {
             cout<<"fizzbuzz"<<"\n";
         }
         else if(n%3==0)
         {
             cout<<"fizz"<<"\n";
         }
         else if(n%5==0)
         {
             cout<<"buzz"<<"\n";
         }
         else
         {
             cout<<n<<"\n";
         }
         
         
     }  
     return 0;
}
