#include<stdio.h>
int main(){
	int size,temp=0;
	printf("Enter he size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter number of elements in array\n");
	for(int i=0;i<=size-1;i++)
		{
		scanf("%d",&arr[i]);
		}
		printf("%ls",arr);
		
		for(int j=0;j<size;j++)
			{
			temp=temp+arr[j];
			
			}
		printf("sum of array element: %d \n",temp);
		
	return 0;
	}
