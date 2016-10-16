#include <stdio.h>
#include<string.h>

int main()
{
  char s[100],r[100];
  int i,j;
  scanf("%s",&s);
  if (strlen(s)>100 || strlen(s)<1)
  return 0;
  for(j=0,i=strlen(s)-1;i>=0;i--,j++)
  {if(s[i]>='A' && s[i]<='Z')
  s[i]+=32;
  r[j]=s[i];}
//  printf("%s %s",r,s);
if(strcmp(s,r) == 0)
  printf("YES");
  else
  printf("NO");
}