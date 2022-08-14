#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
return a+b;
}
int main(int argc ,char *argv[])
{
	int a= -1,b=-1;
	 a=atoi(argv[1]);
	 b=atoi(argv[2]);
	int sum=add(a,b);
	printf("sum = %d \n",sum);
return 0;
}
