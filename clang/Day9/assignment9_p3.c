#include<stdio.h>
int main()
{
int i=10;
int *ptr=NULL;
int **dptr=NULL;
ptr=&i;
dptr=&ptr;
printf(" value of i= %d \n",i);

printf(" value of *ptr= %d \n",*ptr);

printf(" value of *dptr= %d \n",**dptr);

*ptr=20;

printf(" value of i= %d \n",i);

**dptr=30;

printf(" value of i= %d \n",i);

//printf(" value of i= %d \n",i);

return 0;
}
