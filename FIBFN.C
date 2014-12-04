#include<stdio.h>

int fib(int n)

{
  int i,f[50];
  f[0]=2;
  f[1]=5;
  for(i=2;i<n;i++)
  {
     f[i]=f[i-1]+f[i-2];
  }

  printf("the fibonacci series is :");
  for(i=0;i<n;i++)
  printf("%d,",f[i]);

  return 0;
}
int main()
{
int n;
clrscr();
printf("enter the no. range");
scanf("%d",&n);
fib(n);
getch();
return 0;
}
