#include<stdio.h>

void swap(int *a,int *b)
	{
	int temp=*a;
	      *a=*b;
	      *b=temp;
	}
int main()
	{
	int x,y;
	printf("Enter first number\n");
	scanf("%d",&x);
	printf("Enter first number\n");
	scanf("%d",&y);
	swap(&x,&y);
	printf("..........after swpping....... \nfirst number=%d second number=%d \n",x,y);
	return 0;
	
	}
