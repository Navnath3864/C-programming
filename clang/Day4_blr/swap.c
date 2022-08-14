#include<stdio.h>
int main()
	{
	int a,b,temp;
	printf("Enter first num a:\n");
	scanf("%d",&a);
	printf("Enter first num b:\n");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d b=%d\n",a,b);
	return 0;	
	}
