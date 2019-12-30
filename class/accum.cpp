#include "string"
#include "iostream"
#include "person.h"
#include "accum.h"
using namespace std;
int main()
{
	accum<int> num(5); //similar as "Person Music("Music","Musictoo",17);"
	num+=3;
	num+=7;
	cout << num.GetTotal() << "\n";

	accum<string> st("");
	st+= "hello";
	st+= " world";
	cout << st.GetTotal() << "\n";

	accum<Person> people(0);
	Person p1("MS","LT",17);
	Person p2("O","Mdol",76);
	people+=p1;
	people+=p2;
	cout << people.GetTotal() << "\n";
}
