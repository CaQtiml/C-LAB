#include "stdc++.h"
using namespace std;
class Person
{
private:
	string fn,ln;
	int num;
public:
	Person(string f,string la,int num); //constructor
	Person()=default; //constructor too
	Person(int num);
	string getName();
	int getNum(int k);
};
Person::Person(string f,string la,int num) : fn(f),ln(la),num(num){}
Person::Person(int num) : num(num){}
string Person::getName()
{
	return fn + " " + ln;
}
int Person::getNum(int k)
{
	return num*k;
}
int main()
{
	Person p1("Sivakorn","LT",17);
	Person p2;
	Person p3(5);
	cout << p1.getName() << " " << p3.getNum(5);
}
