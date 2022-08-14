#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a=-1,b=-1,c=-1;
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	
	int sum=a+b+c;
	return sum;
	//	printf("sum : %d \n ",sum);

//return 0;
}
