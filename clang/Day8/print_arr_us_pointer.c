#include<stdio.h>
int main()
	{
	int size;
	int arr[size];
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the element in array\n");
	for(int i=0;i<size;i++)
		{
		scanf("%d",arr+i);
		}
		printf("print array element using pointer: ");
	for(int i=0;i<size;i++)
		{
		printf("%d ",*(arr+i));
		}
	printf("\n");
	return 0;
	}
