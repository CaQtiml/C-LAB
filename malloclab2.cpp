#include "stdio.h"
#include "stdlib.h"
#include "iostream"
#include "memory"
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	int *A=(int*)malloc(n*sizeof(int)); //declare array dynamically = A[n]
	for(int i=0;i<n;i++)
	{
		A[i]=i+1;
	}
	
//---------------------------------------------------------------
	/*int *B=(int*)realloc(A,2*n*sizeof(int));
	printf("Prev block address = %d , new block address = %d\n",A,B);
	for(int i=0;i<2*n;i++)
	{
		//A[i]=i+1;
		cout << B[i] << "\n";
	}

	printf("\n");*/

	int *C=(int*)realloc(A,(n/2)*sizeof(int));
	printf("Prev block address = %d , new block address = %d\n",A,C);
	for(int i=0;i<n;i++)
	{
		//A[i]=i+1;
		cout << C[i] << "\n";
	} 
}

