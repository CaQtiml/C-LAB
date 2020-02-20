#include "stdio.h"
#include <cstdint>
#define int long long
int factorial(int n)
{
	printf("Factorial called with %lld\n",n);
	if(n<2)
	{
		printf("Returning 1\n");
		return 1;
	}
	int sum = n * factorial(n-1);
	printf("Returning %lld for the factorial of %lld\n",sum,n);
	return sum;
}
int32_t main()
{
	printf("%lld\n",factorial(10));
}