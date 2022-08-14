#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
  int i, sum;
  printf ("Program name s %s\n", argv[0]);
  printf ("argument count is %d\n", argc);

  for (i = 1; i < argc; i++)
    printf ("argument %d  supplied is %s\n", i, argv[i]);

int num1=atoi (argv[1]);
int num2=atoi (argv[2]);
if(num1<num2){
printf("the greatest number is %d \n",num2);
printf("the smallest number is %d \n",num1);
}
if(num1>num2){
printf("the greatest number is %d \n",num1);
printf("the smallest number is %d \n",num2);
}
if(num1==num2){
printf("both number are equals\n");
}  
}
