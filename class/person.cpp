
#include "person.h"
#include "bits/stdc++.h"
using namespace std;
#define PKhing printf("\n")
//Person::Person(string f,string la,int num) : fn(f),ln(la),num(num){}
//string Person::getName()
/*{
	return fn + " " + ln;
}*/
bool Person::operator<(Person const& p)const
{
	return num<p.num;
}
bool Person::operator<(int i)const
{
	return num<i;
}
bool operator<(int i,Person const& p)
{
	return i<p.getNumber();
	// return i<p.num; //Accepted only when there is (*) line in person.h
}

int main()
{
	Person p1("SS","Jeam",112);
	Person p2("O","Mhdol",67);
	//Person p2;
	//cout << p1.getName();
	p1<p2 ? cout << "T" : cout << "F";
	PKhing;
	p1<300 ? cout << "TT" : cout << "FF";
	PKhing;
	224<p1 ? cout << "TTT" : cout << "FFF";

}