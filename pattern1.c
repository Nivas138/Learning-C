#include<stdio.h>
int main()
{
int i,j,k,n,c;
printf("\nEnter n: ",&n);
scanf("%d",&n);
for(i=0;i<n;i++)
{
 if(i<n/2)
 {
 for(j=0;j<n;j++)
 {
 if(i==j)
 {
  for(k=j;k<n;k++)
  {
   if(k<n-i)
   {
   printf("%d ",n-i);
   }
   else
   {
    printf("%d ",k+1);
   }
  }
  break;
 }
  else
  {
   printf("%d ",n-j);
  }
 }
 printf("\n");
 }
 else
 {
   for(j=0;j<n;j++)
 {
 if(i==(n-1)-j)
 {
  for(k=j;k<n;k++)
  {
   if(k<i)
   {
   printf("%d ",n-j);
   }
   else
   {
    printf("%d ",k+1);
   }
  }
  break;
 }
  else
  {
   printf("%d ",n-j);
  }
 }
 printf("\n");
 }
}
return 0;
}

