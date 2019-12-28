#include "tweeter.h"
#include "stdc++.h"
using namespace std;
Tweeter::Tweeter(string fi,string lt,int num,string ss) : Person(fi,lt,num) , st(ss){}
string Tweeter::getid()
{
	return st;
}
int main()
{
	Tweeter tt("SI","LT",17,"@MusicSivakorn");
	cout << tt.getName() << " " << tt.getid();
}
