#include "stdio.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
// int add(int *a,int *b)
// {
// 	printf("Address of a in add() = %d\n",&a);
// 	printf("Address of a in main() [in add()] = %d\n",a);
// 	printf("Value at address stored in a of add() = %d\n",*a);
// 	int c = (*a)+(*b);
// 	return c;
// }
void PHC()
{
	cout << "HELLO WORLD";
}
int *psum(int *a,int *b)
{
	int *c=new int();
	*c = (*a)+(*b);
	//cout << c;
	return c;
}

int main()
{
	int a=2,b=4;
	//printf("Address of a in main() = %d\n",&a);
	//int c=add(&a,&b);
	//cout << "J";
	int* ptr=psum(&a,&b);
	PHC();
	//cout << c;
	//cout << "H";
	printf("%d",*ptr);
}

/*
OUTPUT

Address of a in main() = 7536152
Address of a in add() = 7536112
Address of a in main() [in add()] = 7536152
Value at address stored in a of add() = 2
6
*/
