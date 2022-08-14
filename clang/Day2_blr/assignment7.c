#include<stdio.h>
int main(){
float si,principle,rate,time;
printf("enter the volue of principle,rate,and time\n");
scanf("%f%f%f",&principle,&rate,&time);
si=principle*rate*time;
printf("simple interest:%f\n",si);
return 0;
}
