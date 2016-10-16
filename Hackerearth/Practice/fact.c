#include <stdio.h>


int main()

{

	int n;

	long int f=1;

        scanf("%d",&n);
    if(n<1 || n>10)
    return 0;
    for(;n>1;n--)
    	f=f*n;
    	printf("%ld",f);
    return 0;
}