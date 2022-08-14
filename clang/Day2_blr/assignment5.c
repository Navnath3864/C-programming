#include<stdio.h>
int main()
{
int i=8,j=5;
float x=0.005,y=0.01;
char c='c',d='d';

float ans1=(3*i*j)%(2*d);
printf("\nvalue of (3*i*j)%%(2*d): %f \n",ans1);

float ans2=(i*j)%(c+2*d)/(x*y);
printf("\nvalue of (i*j)%%(c+2*d)/(x*y)=%f \n",ans2);

float ans3=5*(i+j)>'c';
printf("\nvalue of 5*(i+j)>'c'=%f \n",ans3);

float ans4=2*x+(y==0);
printf("\nvalue of 2*x+(y==0)=%f \n",ans4);

float ans5=(x>y)&&(i>0)||(j<5);
printf("\nvalue of (x>y)&&(i>0)||(j<5)=%f \n",ans5);


return 0;
}
