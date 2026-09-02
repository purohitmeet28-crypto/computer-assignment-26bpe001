#include<stdio.h>
#include<conio.h>

void main()
{
  int n,q,r;
  clrscr();
  printf("Enter a value:");
  scanf("%d",&n);
  q = n / 7;
  r = n - q * 7;
  if (r == 0)
  printf("%d is divisble by 7.\n",n);
  else
  printf("%d is not divisible bt 7.\n",n);
  getch();
  }
