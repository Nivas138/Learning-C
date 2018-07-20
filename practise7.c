#include<stdio.h>
int a[5]={55,11,24,36,45};
int len;
int reverse(int x)
{
 printf("%d ",a[x-1]);
 if(x>1)
 {
  //printf("%d ",a[x]);
  reverse(x-1);
 }
return 1;
 
}
int main()
{
 len=sizeof(a)/sizeof(a[0]);
 reverse(len);
 return 0;
}
