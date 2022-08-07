 VECTOR :

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    
    vector<int> v;                                                //vector declare with the name of "v"
                                                                  // vector with value's datatype as int and name v
    
    
    arr.push_back(34);                                               //vector's first value is declare as 34
    arr.push_back(45);                                               //vector's next value is 45
    arr.push_back(21);
    
    int s= arr.size();                                               // s=3 (size of v vector)
    
    for(int i=0; i<arr.size(); i++){ cout << arr[i] << endl; }        // to print the whole vector 
  
  
  
  
  
    
    vector<int> a(5,1);                                           // vector name a with 5 spaces(address) and each address value's 1
  
  
  
  
    
    //2D VECTOR
    vector<vector<int>> a(3, vector<int>(4,0));                    // It will create vector of 3 space carring (vector of 4 spaces each value 0)  
                                                                   // | 0000 | 0000 | 0000 |  =  | a[0][0] a[0][1] a[0][2] a[0][3] | a[1][0] a[1][1] a[1][2] a[1][3] | a[2][0] a[2][1] a[2][2] a[2][3] |
    int sizeOfRow = a[0].size();    //size of 1st element of a vector 
    
  
  
  
  
    
    //INSERTING, ERASING and SORTING value
    
  vector<int> v;
  v.push_back(35);
  v.push_back(45);
  v.push_back(55);                     // 35, 45, 55
  
  v.insert(v.begin(),30);            // 30,35, 45, 55
  v.insert(v.begin()+2, 40);        // 30, 35, 40,45, 55    (+2 means insert after 2nd position)
  v.erase(v.begin()+2);              // 30, 35, 45, 55
  v.erase(v.begin(), v.begin()+2); // 45, 55      (Point to notice +2 means 2nd position from begin())
                                         // we don't use v.end() as it gives adress of last element +1
  v.erase(v.begin(), v.end());     // removes first and last element.
  
  
  
  
  sort(v.begin(), v.end());          // to sort the values in ascending order(by default)
  
  
  //BONUS SHORTCUT
  int k = *max_element(v.begin(), v.end());    //To find maximum element, O(n) time complexity
  
  }
