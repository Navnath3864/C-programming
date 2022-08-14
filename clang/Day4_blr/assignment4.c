//4.program for prime fibonacci recursive

#include<stdio.h>
int fibonacci (int i);
int main()
{
int i,j;
for (i = 1; i<20; i++)
{
int val=fibonacci(i);
int prime=1;
for (j =2; j<val; j++)
{
if(val%j==0)
{
prime=0;
break;
}
}
if(prime==1)
{
  printf("%d\t",val);
}
}
  return 0;
}
int fibonacci(int i)
{
   if(i == 0) return 0;
   if(i == 1) return 1;
   return (fibonacci(i-1) + fibonacci(i-2));
}
