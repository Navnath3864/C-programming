#include<stdio.h>
#include<math.h>
#define pi 22.0f/7.0f
#define x 4.0f/3.0f
int main(){
float v,r,y;
printf("Enter the redious\n");
scanf("%f",&r);
y=pow(r,3);
v=x*pi*y;
printf("volume of Spare:%f\n",v);
return 0;
}
