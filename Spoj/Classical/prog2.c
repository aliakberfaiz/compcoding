#include<stdio.h>
#include<math.h>
int main()
{
int t;
long long int ul,ll,i,j,num;
static int f=0;
scanf("%d",&t);
if(t>=1 && t<=10)
for(t;t>0;t--)
{
 scanf("%d%d",&ll,&ul);
if(ll==1) 
	ll++;

if(ll<1 || ul>1000000000|| ll>ul || ll>1000000000 || ul-ll>100000)
{
//printf("0");
continue;
}
else
for(ll;ll<=ul;ll++) 
{
//if(ll==1)
//num=ll+1;
//else
num=ll;
for(i=2,f=0;i<=sqrt(ll);i++)
    { if(num%i==0)
	{f=1;    
	break;}}
if(f==0)
printf("%ld\n",num);   
}
}
return 0;
}



