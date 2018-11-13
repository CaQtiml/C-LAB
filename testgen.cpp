#include "testlib.h"
#include "bits/stdc++.h"
using namespace std;
int main()
{
	registerGen(argc, argv, 1);
	 /* Read number from command line. */
    int n = rnd.next(1, 1e5);
    int m = rnd.next(1, 2e5);
    int q = rnd.next(1, 1e5);
    printf("%d %d %d\n",n,m,q);
    for(int i=1;i<=n;i++){
    	int w = rnd.next(1, 1e9);
    	printf("%d ",w);
	}
	printf("\n");
}
