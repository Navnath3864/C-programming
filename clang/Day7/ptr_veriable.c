#include<stdio.h>
int main()
	{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("address of varible a using pointer= %p\n",ptr);
	printf("print value of a using pointer= %d\n",*ptr);
	printf("value of a= %d\n",*(ptr));
	return 0;
	}
