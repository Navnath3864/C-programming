#include<stdio.h>
int main()
	{
	int x[8]={10,20,30,40,50,60,70,80};
	printf("print array elements in x \n");
	for(int i=0;i<8;i++)
		{
		printf("%d ",x[i]);
		}
		printf("\n");
	//printf("value of x: %ls \n",x);
	//printf("value of x+2: %ls \n",x+2);
	printf("value of *x: %d \n",*x);
	printf("value of (*x+2): %d \n",(*x+2));
	printf("value of *(x+2): %d \n",*(x+2));
	return 0;
	}
