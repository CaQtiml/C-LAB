#include "person.h"
#include "stdc++.h"
using namespace std;
class Tweeter : public Person
{
private:
	string st;
public:
	Tweeter(string fi,string la,int num,string st);
	string getid();
};
