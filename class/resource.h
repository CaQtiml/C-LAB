#include "string"
using namespace std;
class resource
{
private:
	string name;
public:
	resource(string n): name(n){} //abbreviate form of constructor(need to fully implement in *.cpp)
	string getname() const {return name;}
};