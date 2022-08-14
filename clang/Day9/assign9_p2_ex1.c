#include<stdio.h>
int main()
	{
	float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3,}};
	//a. what is the meaning of table?
	//ans: The given table is 2 dimension float array with 2 rows and 3 columns.
	
	//b. what is the meaning of (table+1)?
	//ans: it give the base address of first element in array.
	printf("the value of (table+1)= %p \n",(table+1));
	
	printf("the value of *(table+1)= %p \n",*(table+1));
	
	printf("the value of (table+1)= %p \n",(*(table+1)+1));
	
	printf("the value of (table+1)= %p \n",(*(table)+1));
	
	printf("the value of (table+1)= %f \n",*(*(table+1)+1));
	
	printf("the value of (table+1)= %f \n",*(*(table)+1));
	
	printf("the value of (table+1)= %f \n",*(*(table+1)));
	
	printf("the value of (table+1)= %f \n",*(*(table)+1)+1);
		
	
	
	return 0;
	}
