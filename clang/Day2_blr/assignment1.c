#include<stdio.h>
int main(){  // this is main function
int num1,num2;      // the variable intiger declaration
printf("Enter the number \n");// for acknowledge to user to enter the 2 numbers
scanf("%d %d",&num1,&num2); //get user input from user 
// sum of two number 
int sum= num1+num2;
printf("sum of %d and %d = %d \n",num1,num2,sum);

// substraction of two number 
int sub= num1-num2;
printf("substraction of %d and %d = %d \n",num1,num2,sub);

// multiplication of two number 
int mult= num1*num2;
printf("multiplication of %d and %d = %d \n",num1,num2,mult);

// devide of two number 
float div= num1/num2;
printf("divisor of %d and %d = %f \n",num1,num2,div);

// mod of two number 
int mod= num1%num2;
printf("mod of %d and %d = %d \n",num1,num2,mod);
}
