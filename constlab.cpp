#include<iostream> 
using namespace std; 
  
class Test { 
    int value; 
public: 
    Test(int v = 5) {value = v;} 
    int getValue() {return value*=2;} 
    int getValue() const {return value;}
}; 
  
int main() { 
	//const Test t; // This is also acceptable because we set initial value for Test
    Test t(112); 
    //const Test &Mt = t;
    const Test Mt;
    /*cout << t.getValue(); */
    cout << t.getValue() << " " << Mt.getValue(); 
    return 0; 
} 