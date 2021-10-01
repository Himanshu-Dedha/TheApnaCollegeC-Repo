#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a = "aafhaoaoaoaaoahgav";
    int freq[26];
    for(int i = 0 ; i<26;i++)
    {
        freq[i]=0 ;
    }
    for(int i=0;i<a.size();i++)
    {
     freq[a[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i = 0;i<26;i++)
    {
        if(freq[i]>maxF)
        {
            maxF=freq[i];
            ans = i+'a';
        }
    }
    cout<<"The max frequency is "<<maxF<<"  "<<"and the character is "<<ans<<endl;
    /*cout<<a[5]<<endl;
    cout<<'a'<<endl;
    cout<<a[5]-'a'<<endl;//a[5]= o and the ascii value of o is 14 + 'a'
    */
    return 0;
}