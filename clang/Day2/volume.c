#include<stdio.h>
int main(){
	float volume,hight,length,width;
	printf("enter the hight,lenth,width\n");
	scanf("%f%f%f",&hight,&length,&width);
	volume=hight*length*width;
	printf("volume:%f\n",volume);
return 0;
}
