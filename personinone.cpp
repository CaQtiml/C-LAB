#include "bits/stdc++.h"
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
Person::Person(string f,string la,int num) : fn(f),ln(la),num(num){}
string Person::getName()
{
	return fn + " " + ln;
}
int main()
{
	Person p1("Sivakorn","LT",17);
	Person p2;
	cout << p1.getName();
}