#include <string>
using namespace std;
class Person
{
private:
	string fn,ln;
	int num;
public:
	Person(string f,string la,int num); //constructor
	Person()=default; //constructor too
	string getName();
};