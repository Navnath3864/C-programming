#include<stdio.h>
struct number{
int num;
char a[10];
};
union number1
{
int num1;
char b[10];
};
int main()
{
struct number obj;
union number1 obj1;

printf("the size of structure in byte: %ld \n",sizeof(obj));
printf("the size of union in byte: %ld \n",sizeof(obj1));

printf("Enter the number in struct\n");
scanf("%d",&obj.num);

printf("Enter the string in struct\n");
scanf("%s",obj.a);

printf("Enter the number in union\n");
scanf("%d",&obj1.num1);
printf("the given number in union is %d \n",obj1.num1);

printf("Enter the string in union\n");
scanf("%s",obj1.b);


printf("the given number in structure is %d \n",obj.num);

printf("the given string in structure is %s \n",obj.a);




printf("the given string in union is %s \n",obj1.b);


return 0;
}
