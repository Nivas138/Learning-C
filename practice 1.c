#include<stdio.h>
int main()
{
 int i,j,n,arr[30],count[30],count_1,temp,temp1;
 printf("\nenter n: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nENTER %d ELEMENT: ",i+1);
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  count_1=0;
  for(j=1;j<=arr[i]-1;j++)
  {
  if(arr[i]%j==0)
   {
   count_1+=1;
   count[i]=count_1;
   }
  }
     //printf("\ncount arr: %d",count[i]);
 }
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
   {
    if(count[j]==count[j+1])
    {
     if(arr[j]>arr[j+1])
     {
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
     }
    }
    if(count[j] > count[j+1])
    {
     temp=count[j];
     temp1=arr[j];
     count[j]=count[j+1];
     arr[j]=arr[j+1];
     count[j+1]=temp;
     arr[j+1]=temp1;
    }
   }
  }
  printf("\nSorted order: ");
  for(i=0;i<n;i++)
  {
   printf("%d ",arr[i]);
  }
return 0;
}

