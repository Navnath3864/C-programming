#include<stdio.h>
#include<stdlib.h>
int foo(int a,int b,int c)
{
	int sum=0;
	sum=a+b+c;
	return sum;
	
}
int main(int argc,char *argv[])
{
	int x=0,y=0,z=0,l;
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	z=atoi(argv[3]);
	l=foo(x,y,z);
	printf("\n sum of three number using cammand line arguments = %d \n",l);
	
return 0;
}
