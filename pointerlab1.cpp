#include "stdc++.h"
void pt(int *p)
{
	*p=5;
}
int main()
{
	int *p = new int(3);
	std::cout << *p << "\n";
	int a=3;
	pt(&a);
	std::cout << a << "\n";
	pt(p);
	std::cout << *p << "\n";
}
