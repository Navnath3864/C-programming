#include<stdio.h>
int main(){
	int row,count=1;
	printf("Enter the number of rows");
	scanf("%d",&row);
	for(int i=1;i<=row;i++)
	{
	for(int j=1;j<=i;++j)
	{
	printf("%d ",count);
	++count;
	}
	printf("\n");
	}
return 0;
}

