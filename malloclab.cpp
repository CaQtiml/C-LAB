#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "memory"
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
//----------------------------------------------------------------------------
	int *A=(int*)malloc(n*sizeof(int)); //declare array dynamically = A[n]
	// for(int i=0;i<n;i++)
	// {
	// 	A[i]=i+1;
	// }
	for(int i=0;i<n;i++)
	{
		//A[i]=i+1;
		cout << A[i] << "\n";
	}
	printf("\n");
//----------------------------------------------------------------------------
	int *B=(int*)calloc(n,sizeof(int)); //B[n]
	for(int i=0;i<n;i++)
	{
		//A[i]=i+1;
		cout << B[i] << "\n";
	}
//----------------------------------------------------------------------------
}

//compile to see difference between malloc() and calloc()