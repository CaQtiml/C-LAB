#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // initialising the vector 
    vector<int> vec = { 10, 30, 50 , 70 , 90 }; 
  
    // inserts 3 at front   
    auto it = upper_bound(vec.begin(),vec.end(),60);
    //cout << it-vec.begin()<<"\n"; 
      
    // inserts 2 at front  
    vec.insert(it, 60); 
  
    cout << "The vector elements are: ";  
    for (auto it = vec.begin(); it != vec.end(); ++it) 
        cout << *it << " "; 
  
    return 0; 
} 