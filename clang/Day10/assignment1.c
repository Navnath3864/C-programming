#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	char sex[10];
	int exscore;
	
	};
	int main()
	{
	int i,j=0,max=0,min=0;
	struct student stud[3];
	int maxmarks[0];
	//struct student *ptr=&stud[0];
	for(int i=0;i<3;i++){
	printf("Enter the roll number: \n");
	scanf("%d",&stud[i].rollno);
	
	printf("Enter the name: \n");
	scanf("%s",stud[i].name);
	
	printf("Enter the gender: \n");
	scanf("%s",stud[i].sex);
	
	printf("Enter the exam score: \n");
	scanf("%d",&stud[i].exscore);
	
	
	}
	
	for(int i=0;i<3;i++){
	
	printf("the roll number is : %d \n",stud[i].rollno);
	
	printf("the name of student is : %s \n",stud[i].name);
	
	printf("the gender of student : %s \n",stud[i].sex);
	
	printf("student marks in exam : %d \n\n\n",stud[i].exscore);
	}
	
	for(int i=0;i<3;i++)
	{
	
		if(stud[i].exscore > max)
			{
			max=stud[i].exscore;
			}
	}		
	
		for(j=0;j<3;j++)
		{
			if(stud[j].exscore < stud[min].exscore)
				{
				min=j;
			
				}
			
			}		
	for(int i=0;i<3;i++)
	{
	
		if(max==stud[i].exscore)
		{
			
		printf("\nmaximum score done by student \n\n\n");
  		printf("roll number of student: %d \n",stud[i].rollno);
		printf("name of studnet: %s \n",stud[i].name);
		printf("gender of student: %s \n",stud[i].sex);
		printf("the max score is: %d \n\n\n",stud[i].exscore);
	
		}
	}	
	for(int j=0;j<3;j++)
	{
		if(min==j)
		{
			
		printf("\nminimum score done by student \n\n\n");
  		printf("roll number of student: %d \n",stud[j].rollno);
		printf("name of studnet: %s \n",stud[j].name);
		printf("gender of student: %s \n",stud[j].sex);
		printf("the minimum score is: %d \n\n\n",stud[j].exscore);
			
		}
		 	
	}
	return 0;
	}
