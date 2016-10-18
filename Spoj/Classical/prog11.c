//	LINK TO QUESTION - http://www.spoj.com/problems/FCTRL/

#include <stdio.h>

int main(void) {
	
long long int t,n,test,zero;

	scanf("%lld",&t);
	
	for(t;t;t--)
	{
		scanf("%lld",&n);
		for(test=5,zero=0;n>=test;test=test*5)
		{
			zero=zero+n/test;
		}
		printf("%lld\n",zero);
	}

	return 0;
}