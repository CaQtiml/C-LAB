#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
	int A[]={2,4,5,7,8};
	int *p=A;
	for(int i=0;i<5;i++)
	{
		printf("Address=%d\n",&A[i]);
		printf("Address=%d\n",A+i);
		printf("Value=%d\n",A[i]);
		printf("Value=%d\n",*(A+i));
	}
}

/*
OUTPUT

Address=7536112
Address=7536112
Value=2
Value=2
Address=7536116
Address=7536116
Value=4
Value=4
Address=7536120
Address=7536120
Value=5
Value=5
Address=7536124
Address=7536124
Value=7
Value=7
Address=7536128
Address=7536128
Value=8
Value=8

*/