#include<stdio.h>
int len;
int reverse(char *q,int l)
{
 printf("%c ",q[l-1]);
 if(l>1)
 {
  reverse(q,l-1);
 }
return 1;
 
}
int main()
{
 char *p="Nivas";
 len=sizeof(p)/sizeof(p[0]);
 reverse(p,len);
 return 0;
}
