/*
STRING: aaray of char OR set of character
"String"    {'c','h','a','r'}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
  string s1;
  char c1 ='a';
  
  cout<<"Please enter some text: "<<endl;
  getline(cin, s1);
  
  cout<<"Output is: "<<s1<<endl;
  cout<<"second letter of sting s1 is: "<<s1[1]<<endl;
  
  cout<<"length of the given string is: "<< s1.length()<<endl;
  sort(s1.begin(),s1.end());
  reverse(s1.begin(),s1.end());
  
  cout<<"Reversed string is: "<<s1<<endl;
  
  string str1="12";
  string str2="51";
  string s;
  s=str1+str2;
  cout<<"s value is: "<<s<<endl;
  
  string a1 ="hell0o I am Vai";
  a1=a1+"bhav";
  
  cout<<"a1 value is: "<<a1 <<endl;
  
  int a= stoi(str1);
  int b= stoi(str2);
  
  cout<<"addition of str1 and str2 is: "<<a+b<<endl;
  int x=7634;
  string s4 = to_string(x);
  
  char c='b';
  int t= c;
  
  cout<<"t is  "<<t<<endl;
  
  string abc = "Hello I am Anjul";
  
  for(int i =0; i< abc.length(); i++)
  {
    cout<<"ASCII value is: "<<int(abc[i])<<endl;
  }

}


/*

cout<<"Please enter text: "                     -> o/p
getline(cin, s1)                                -> i/p  "Hello World"  //if cin>>s1 then it will not take "World" will gonna take "Hello" only
s1[1]                                           ->  e
s1.length()                                     -> size
sort(s1.begin(), s1.end())                      -> sorting (space-> capital-> small case)       O(NlogN)
reverse(s1.begin(), s1.end())                   -> reverse                                      O(N)
s = str1 + str2                                 ->  to add to string 
int a- = stoi(str1)                             ->  force string into int
string s= to_string(x)                          ->  force int into string
int t = 'b'                                     ->  for ASCII value                            A-Z(90)      (97)a-z
swap(s.begin(), s.end())                        ->  to swap 1st and last                        O(N)


*/
