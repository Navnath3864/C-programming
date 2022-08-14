#include<stdio.h>
int main(){
const  int time=1; //the value assigned by time variable does not change
const char ch='R'; //the value assigned by ch variable does not change
const char s[]="Simple Interest: "; //the value assigned by s variable does not change
const float RateOfInterest=4; 	//the value assigned by RateOfInterest variable does not change
int principle; //the value assigned to the principal variable is changed because this variable is not a constant variable
printf("Enter the principal amount\n");
scanf("%d",&principle);

float SimpleInterest=(principle*time*RateOfInterest)/100;
printf("%s",s);
printf("%f ",SimpleInterest);
printf("%c \n",ch);




return 0;
}
