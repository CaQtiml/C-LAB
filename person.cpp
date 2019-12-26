#include "person.h"
#include "bits/stdc++.h"
using namespace std;
Person::Person(string f,string la,int num) : fn(f),ln(la),num(num){}
string Person::getName()
{
	return fn + " " + ln;
}
int main()
{
	Person p1("SL","LT",17);
	Person p2;
	cout << p1.getName();
}