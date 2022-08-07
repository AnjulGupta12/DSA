 VECTOR :

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    
    vector<int> v;                                                //vector declare with the name of "v"
                                                                  // vector with value's datatype as int and name v
    
    
    v.push_back(34);                                               //vector's first value is declare as 34
    v.push_back(45);                                               //vector's next value is 45
    v.push_back(21);
    
    int s= v.size();                                               // s=3 (size of v vector)
    
    for(int i=0; i<v.size(); i++){ cout << v[i] << endl; }        // to print the whole vector 
    
    vector<int> a(5,1);                                           // vector name a with 5 spaces(address) and each address value's 1
    
    //2D VECTOR
    vector<vector<int>> a(3, vector<int>(4,0));                    // It will create vector of 3 space carring (vector of 4 spaces each value 0)  
                                                                   // | 0000 | 0000 | 0000 |  =  | a[0][0] a[0][1] a[0][2] a[0][3] | a[1][0] a[1][1] a[1][2] a[1][3] | a[2][0] a[2][1] a[2][2] a[2][3] |
    int sizeOfRow = a[0].size();    //size of 1st element of a vector 
    
    
    //INSERTING AND ERASING VALUE
    
    
    
  }
