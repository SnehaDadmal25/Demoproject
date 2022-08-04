#include<stdio.h>
void fact(int n)
main()
{
  int i,n,fact=1;
  printf("Enter a number");
  scanf("%d",&n);
  fact(n);
}
void fact(intnn)
{
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n factorial=%d",fact);
}
