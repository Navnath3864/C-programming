#include<stdio.h>
int main()
	{
	int n;
	int arr[n];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter elements in array\n");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++)
			{
			printf("element %d present at address %p\n",arr[i],&arr[i]);
			}
	return 0;	
	}
