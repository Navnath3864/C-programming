#include<stdio.h>
int main()
	{
	int row;
	int col;
	printf("enter the number of row\n");
	scanf("%d",&row);
	printf("enter the number of col\n");
	scanf("%d",&col);
	int arr[row][col];
	for(int i=0;i<row;i++)
		{
		for(int j=0;j<col;j++)
			{
			printf("Enter the value for array [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			}
		}
		printf("\v");
	printf("print 2d array\v");
	for(int i=0;i<row;i++)
		{
		printf("\n");
		for(int j=0;j<col;j++)
			{
			printf("%d \t",arr[i][j]);
			}
		}
		printf("\n");
	return 0;
	}
