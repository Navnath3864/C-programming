#include<stdio.h>
int cal_sum(int n1,int n2)
{
	return n1+n2;

}
int main()
{
	int (*pointerfun) (int ,int );
	pointerfun=cal_sum;

	// calling using the funtion pointer 
	int res1=pointerfun(2,5);
	//calling using normal function
	int res2=cal_sum(4,5);
	
	printf("through function pointer : %d \n",res1);
	printf("through normal call : %d \n",res2);
	return 0;

}
