#include "iostream"
#include "resource.h"
using namespace std;
int main()
{
	resource* pR = new resource("create");
	string newST = pR->getname();
	resource* p2= pR;
	cout << newST << "\n";
	delete pR;
	pR=nullptr;
}