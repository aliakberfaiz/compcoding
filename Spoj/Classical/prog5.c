#include<stdio.h>

int reverse(long int k)
{
 long int m=k,s=0,i;
 int flag=1;
    for(i=0;k>0;k=k/10)
 	s=s*10+k%10;
    if(s==m)
	return 1;
    return 0;
}

int main()
{
 int t;
 long int n,i;
  scanf("%d",&t);
  if(t<=0 || t>100)
   return 0;
  for(;t>0;t--)
   {
	scanf("%ld",&n);

	 if(n>1000000)
		continue;
	 for(i=1;1;i++)
 	 if(reverse(n+i)==1)
		{
		 printf("%ld\n",n+i);
		 break;
		}
   }
return 0;
}