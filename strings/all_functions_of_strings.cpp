//algorithm header file contains all the sorting algorithms 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a="abc";
string b="xyz";
// Append
a.append(b);
cout<<a<<endl;//abcxyz
cout<<b.append(a)<<endl;//xyzabcxyz
cout<<a+b<<endl;//abcxyzxyazabcxyz (this happened because append adds the strings permanently)

//string clear
a.clear();
b.clear();
cout<<a<<endl<<b<<endl;
//this gave no output because clear cleared everything stored in the string 
  

 //to compare two strings 
 a="abc";
 b="xyz";
 cout<<a.compare(b);//-1513239 idk why this value is popping up
 cout<<b.compare(a)<<endl;//the same value above popped up means it is right 
    


 //empty function
 //checks whether a string is empty or not
 a.clear();
 cout<<a.empty();//output - 1 it means 1 for true
 //cout<<empty(a); - this gave an error ,i think the reason we can't add a in the brackets is because it will mimick a user defined function and will shoe an error
cout<<b.empty()<<endl;//output - 0  it means  0 for false



//erase function - erases a substring from a string 
string c="nincompoop";
c.erase(3,3);
cout<<c<<endl;//ninpoop is the answer and it is permanent




//find function - to find a substring in a string
cout<<c.find("poop")<<endl;//returns the index from which the substring starts i.e. 3(ninpoop)



//insert function
//inserting com  back 
c.insert(3,"com");
cout<<c<<endl;//we have our nincompoop back




//length of a string 
cout<<c.length()<<endl<<c.size()<<endl;//both return the size of the string



//to get a substring from a string 
string d = c.substr(6,4);
cout<<d<<endl;//returns poop 



//to convert  a  numeric string into an integer 
string s = "11";
int n = stoi(s);
cout<<s+"2"<<endl<<n+2; //appends in the first case and adds in the second 



//to convert an integer into a string 
cout<<to_string(n)+"2"<<endl; //to_string converts the integer value to a string



//sorting in a string
//algorithm  header file used for this one 
string f="afhajkvfjhioaaiohfhfiffahffhaof";
string g="81468868564862895792875959595";
sort(f.begin(),f.end());
sort(g.begin(),g.end());//works both ways 
cout<<f<<endl<<g<<endl;
//what  about alphanumeric strings ??
string h="afhfaehfhfhi48356856";
sort(h.begin(),h.end());
cout<<h<<endl;//first numbers then the alphabet




return 0;
}