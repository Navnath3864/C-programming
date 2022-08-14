#include<stdio.h>
int main()
	{
	int n,i,j;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		{
		for(j=2;j<=i;j++)
			{
			if(i%j==0)
				{
				break;
				}
			}
			if(i==j)
				{
				//printf("%d ",i);
				int temp=0;
				temp=temp+i;
				printf("%d ",temp);
			  int count=0;
			   for(int k=1;k<=temp;k++)
				{
				if(temp%k==0)
					{
					count++;
					}
				}
				if(count==2)
					{
					temp=temp;
					}
					else{
					break;
			}
			//
			}	
				
			}
		return 0;
	 }
