#include<stdio.h>
main()
{
  int i,n,fact=1;
  printf("Enter a number");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("factorial=",fact);
}
