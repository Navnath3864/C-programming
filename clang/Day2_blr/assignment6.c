#include<stdio.h>
#define pi 3.14
int main(){
int r;
float area;
float areaofcircumference;
printf("Enter the redious of circle\n");
scanf("%d",&r);
area=pi*r*r;
printf("area of circle:%f\n",area);
//areaofcircumference=2*pi*r;
//printf("area of circumference :%f\n",areaofcircumference);
return 0;
}
