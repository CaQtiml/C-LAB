#include <string>
using namespace std;
class Person
{
private:
	string fn,ln;
	int num;
public:
	Person(string f,string la,int num) : fn(f),ln(la),num(num){} //constructor
	Person(); //constructor too
	string getName()
	{
		return fn+" "+ln;
	}
};