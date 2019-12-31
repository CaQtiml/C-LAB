#include "stdio.h"
#include "iostream"
using namespace std;
int add(int a,int b){return a+b;}
void PHC(){printf("HELLO\n");}
void PH(char *name){printf("HELLO%s\n",name);}
int main()
{
	int (*p)(int,int) = &add;
	//int (*p)(int,int) = add; //This is also acceptable because function name will return as a pointer
	int c = p(2,3); //de-referencing and executing the function
	//int c = (*p)(2,3) //This is also ok
	cout << c << "\n";

	void (*ptr)() = PHC;
	ptr();

	void (*ptr2)(char*) = PH;
	ptr2("MUSIC");
}