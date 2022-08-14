#include<stdio.h>

int main(int argc, char* argv[])
{
	int i=0;
	for(int i=0;i<argc;i++)
	{
		printf("At argv[%d] arguments is : %s \n ",i,argv[i]);
	}
return 0;
}
