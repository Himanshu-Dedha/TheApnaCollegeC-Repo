#include<iostream>
using namespace std;
 void printincreasing(int n)
 {
     if(n==0)
     {
         cout<<0;
     }
     else if(n>0)
     {
         cout<<n<<endl;
     }
     printincreasing(n-1);
     
 }
 int main()
 {
      int n;
      cin>>n;
      printincreasing(n);
     return 0;
 }