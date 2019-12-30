#include "bits/stdc++.h"
using namespace std;
#define god printf("\n");
int main()
{
	int i=5;
	int j=10;
	int *pI = &i;

	int const *pcI = pI; //pointer to a const
	// you can't use "*pcI=4"
	pcI = &j;
	cout << *pcI;god

	int * const cpI = pI; //constant pointer
	*cpI=4; //This is acceptable
	// cpI = &j => This is unacceptable
	cout << *cpI << " " << *pI;god //value pointed by &pI is also change.

	int const * const crazy = pI; //const pointer to a const
	//*crazy=4;
	//crazy=&j;
	//both above are unacceptable.
	int kk = *crazy;
	cout << kk;god

	*cpI=112;
	int **dpI=&pI; //This is equal to "int *dpI=pI"
	cout << **dpI << "\n";

	int *test=pI;
	cout << *test << "\n";
}

/*
OUTPUT
10
4 4
4
112
112
*/