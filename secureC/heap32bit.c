#include<stdio.h>
#include<stdlib.h>

int main()
{
int *a=malloc(10);
int *b=malloc(8);
int *e=malloc(13);
int *c=malloc(1);
int *d=malloc(0);
free(a);
free(b);
free(c);
return 0;
}

