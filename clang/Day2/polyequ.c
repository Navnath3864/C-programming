#include<stdio.h>
#include<math.h>
int main(){
float x,vol;
printf("Enter the volue of x\n");
scanf("%f",&x);
vol=((6*pow(x,5))+(5*pow(x,4))-(4*pow(x,3))+(3*pow(x,2))+(2*x)+1);
printf("vol:%f\n",vol);
return 0;
}
