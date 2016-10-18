//	LINK TO QUESTION - http://www.spoj.com/problems/TEST/

#include <stdio.h>

int main()
{
    int n;
    A:scanf("%d",&n);
    if(n==42)
    return 0;
    else 
    {printf("%d\n",n);
    goto A;}
    return 0;
}
