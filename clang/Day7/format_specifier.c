#include<stdio.h>
int main()
	{
	int a=10;
	int *aptr=&a;
	char ch[]="Navnath";
	char *chptr=ch;
	double da=10020644;
	double *daptr=&da;
	float e=10.14;
	float *eptr=&e;	
	
	printf("value of a=%d and address= %p \n",a,&a);
	
	printf("value of *aptr=%d and address= %p \n",*aptr,aptr);
	
	printf("value of ch=%s and address= %p \n",ch,ch);
	
	printf("value of *chptr= %c and address= %p \n",*chptr,chptr);
	
	printf("value of da= %f and address= %p \n",da,&da);
	
	printf("value of *daptr= %f and address= %p \n",*daptr,daptr);
	
	printf("value of e= %f and address= %p \n",e,&e);
	
	printf("value of *epte= %f and address= %p \n",*eptr,eptr);
	
	return 0;
	}

