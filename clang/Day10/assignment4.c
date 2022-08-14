#include<stdio.h>

struct employee{
   
   int id;
   char name[10];
   char gender[10];
   float salary;
}emploee;

int main(){
   struct employee emp[3]; //we can enter 3 employee details.
   struct employee *ptr=&emp[0];   // declare struct pointer variable;
   //*ptr=emp; //assign pointer
   int i;
   for(i=0;i<3;i++)
   {
   printf("Enter the employee id \n");
   scanf("%d",&emp[i].id);
   
   printf("Enter the employee name \n");
   scanf("%s",emp[i].name);
   
   printf("Enter the employee gender \n");
   scanf("%s",emp[i].gender);
   
   printf("Enter the employee salery \n");
   scanf("%f",&emp[i].salary);

   }	
	for(i=0;i<3;i++)
	{
	printf("Enter the employee id : %d \n",(ptr+i)->id);
       
        printf("Enter the employee name : %s \n",(ptr+i)->name);
        
        printf("Enter the employee gender : %s \n",(ptr+i)->gender);
        
        printf("Enter the employee salery : %f \n\n\n",(ptr+i)->salary);
  

	
	
	}

return 0;
}
