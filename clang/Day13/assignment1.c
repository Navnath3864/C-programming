// assignment 13 que 1
#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int rollno,marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("/home/osboxes/Public/student.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter rollNO: ",i+1);
		scanf("%d",&rollno);
		printf("Enter name of student: \n");
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"rollNO: %d \nName: %s \nMarks=%d \n",rollno,name,marks);
	}
	fclose(fptr);
	return 0;
}
