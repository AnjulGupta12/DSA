/*
STRING: aaray of char OR set of character
"String"    {'c','h','a','r'}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
  string s1;
  char c1 ='a';
  
    //string input
  cout<<"Please enter some text: "<<endl;
  getline(cin, s1);                                                                         // Don't enter like cin>>s1 because if u want to enter string like "Hello World" then it will enter only "Hello" not "World"
  
    //string output
  cout<<"Output is: "<<s1<<endl;                                                            // Assume s1 = "Hello World"
  cout<<"second letter of sting s1 is: "<<s1[1]<<endl;                                      // s[1] = e 
  
    //function in string
  cout<<"length of the given string is: "<< s1.length()<<endl;                              // to measure length for s1 =11
  sort(s1.begin(),s1.end());                                                                // It will sort acc to ASCII value "    HWdellloor" (4 space at start) 
  reverse(s1.begin(),s1.end());                                                            // It will reverse the string "roollledWH    "
  
  cout<<"Reversed string is: "<<s1<<endl;
  
    //ADDING TO STRING 
  string str1="12";
  string str2="51";
  string s;
  s=str1+str2;                                                                              // It will add two string s = 1251
  cout<<"s value is: "<<s<<endl;
  string a1 ="hell0o I am Vai";
  a1=a1+"bhav";                                                                             // a1 = "hell0o I am Vaibhav"
  cout<<"a1 value is: "<<a1 <<endl;
  
    
    //FORCING TO CONVERT STRING TO INT AND INT TO STRING 
  int a= stoi(str1);
  int b= stoi(str2);                                                                        //Force string into int
  cout<<"addition of str1 and str2 is: "<<a+b<<endl;                
    
  int x=7634;
  string s4 = to_string(x);                                                                 //Force int into string
  
    
    // DEALING WITH ASCII VALUE
  char c='b';                       
  int t= c;
  cout<<"t is  "<<t<<endl;                                                                  // (int)t= (char)c = 'b' = 98
                                                                                            //A-Z (ASCII value of Z=90)
                                                                                            // a-z (ASCII value of a=97)
  
  string abc = "Hello I am Anjul";
  for(int i =0; i< abc.length(); i++)
  {cout<<"ASCII value of "<<abc[i]<<" is: "<<int(abc[i])<<endl;}

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






//OUTPUT OF ABOVE CODE IS 

// Please enter some text: 
// Hello World
// Output is: Hello World
// second letter of sting s1 is: e
// length of the given string is: 11
// Reversed string is: roollledWH 
// s value is: 1251
// a1 value is: hell0o I am Vaibhav
// addition of str1 and str2 is: 63
// t is  98
// ASCII value of H is: 72
// ASCII value of e is: 101
// ASCII value of l is: 108
// ASCII value of l is: 108
// ASCII value of o is: 111
// ASCII value of   is: 32
// ASCII value of I is: 73
// ASCII value of   is: 32
// ASCII value of a is: 97
// ASCII value of m is: 109
// ASCII value of   is: 32
// ASCII value of A is: 65
// ASCII value of n is: 110
// ASCII value of j is: 106
// ASCII value of u is: 117
// ASCII value of l is: 108
