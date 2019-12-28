#include <string>
using namespace std;
class Person
{
private:
	string fn,ln;
	int num;
	//friend bool operator<(int i,Person const& p); ---(*)
public:
	//Person(string f,string la,int num);
	Person(string f,string la,int num) : fn(f),ln(la),num(num){} //constructor
	Person(); //constructor too
	string getName()
	{
		return fn+" "+ln;
	}
	int getNumber() const {return num;}
	bool operator<(Person const& p) const;
	bool operator<(int i) const;
};
bool operator<(int i,Person const& p);

//const will call function that has "const"