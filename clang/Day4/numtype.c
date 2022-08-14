#include<stdio.h>
int main(){
	int num;
	printf("Enter your number\n");
	scanf("%d",&num);
	if(num<0)
		{
		printf("Negetive number\n");
		}
	else if(num>0)
		{
		printf("positive number\n");
		}
		
	else
		{
		printf("the number is zero\n");
		}	
return 0;
}
