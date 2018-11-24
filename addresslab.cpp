#include "stdio.h"
int main()
{
	int b=8;
	int &a=b;
	printf("%d",a);
	b+=2;
	printf("%d",a);
}