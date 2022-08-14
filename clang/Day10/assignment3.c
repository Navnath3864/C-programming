#include<stdio.h>
typedef struct complex{
float real;
float imag;
}complex;
complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
int main(){
complex n1,n2,result,result1;
printf("Enter the first complex number\n");

printf("Enter the real and imaginary complex number\n");
scanf("%f %f",&n1.real,&n2.imag);

printf("Enter the first complex number\n");

printf("Enter the real and imaginary complex number\n");
scanf("%f %f",&n2.real,&n2.imag);

result=add(n1,n2);
printf("sum= %.1f +%.1fi \n",result.real,result.imag);

result1=sub (n1,n2);
printf("sum= %.1f - %.1fi \n",result1.real,result1.imag);

return 0;
}
complex add(complex n1, complex n2){
complex temp;
temp.real=n1.real+n2.real;
temp.imag=n1.imag+n2.imag;
return (temp);
}

complex sub(complex n1, complex n2){
complex temp1;
temp1.real=n1.real+n2.real;
temp1.imag=n1.imag+n2.imag;
return (temp1);
}
