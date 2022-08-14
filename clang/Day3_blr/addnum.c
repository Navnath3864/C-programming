#include<stdio.h>
int main(){
	int N,sum=0;
	printf("Enter the Number");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		if(i%5!=0)
		{	
			sum=sum+i;
		}
		else
		{
			continue;
		}

	}
	printf("%d\n",sum);
return 0;
}
