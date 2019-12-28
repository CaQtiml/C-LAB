#include "stdc++.h"
using namespace std;
#define god cout<<"\n";
struct Person
{
	string name,nametoo;
	int num;
	Person() : name(), nametoo(), num(){}
	Person(string n, string n2, int n3) : name(n), nametoo(n2), num(n3){}
};
void db(int n)
{
	n*=2;
}
int dbp(int &n)
{
	return n*=2;
}
int dbn(int const& n)
{
	return n+10;
}
int main()
{
	int A=5;
	int* pA=&A;
	cout << pA << " " << *pA;
	int *pB=new int(6);
	god
	cout << ++(*pB);
	god
	Person Music("Music","Musictoo",17);
	Person *pMusic = &Music;
	cout << (*pMusic).nametoo << " " << pMusic->nametoo;
	god
	int a=5;
	cout << dbp(a) << " " << dbn(19);
	//cout << dbp(19);
}
