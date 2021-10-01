#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    cin>>arr;
    int i=0;
    while(arr[i]!='\0')
    {
        i++;//i turns out to be 7 and not 6 this fucks up the things 
    }
    int flag=0;
    for(int m=0;m<i/2;m++)//fucking piece of shit took a lot of time to figure this out
    {
        if(arr[m]==arr[i-m-1])//because i was 7 we had to add a -1
        {
         flag++;
        }
        else 
        flag=0;
    }
    if(flag==i/2)
    cout<<"it's a palindrome";
    else
    {
        cout<<"it's not a palindrome";
    }
    return 0;

/*Unka tareeka
bool check = 1;
for(int i=0;i<n;i++)
{
    if(arr[i]!= arr[n-1-i])
    {
        check = 0;
        break;
    }
}
if(check==true)
{
    cout<<"it's a palindrome";
    else
    cout<<"it's not a palindrome"
}
*/