#include<stdio.h>
void display1();
void display2();
void display3();
void display4();
void display5();

int initial_global,global=10; // declare global variable

int main()
{ 
extern int ex;  		// extern variable can be declare in anyware in program and it can be easily 
display1();
//num1++;		// if we increment the value of auto varibale which is declared in another block.we cannot accessthe variable. 				//compiler give undeclare variable error
display2();
display3();
display4();
display5();

return 0;
}
// global variable
void display1(){		
 ++global;
 printf("\nvalue of global variable: %d\n",global);
 printf("\nthe initial value of global variable: %d\n",initial_global);
 }
 //auto storage class
 void display2(){
 auto int num=20;
 auto int initial_num;
 printf("\nvalue of auto variable: %d",num);
 printf("\nthe initial value of auto variable: %d (some garbage value)\n",initial_num);
 }
 //static storage class
 void display3(){
 static int num1=30;
 static int initial_num2;
 printf("\nvalue of static variable: %d \n",num1);
 printf("\nthe initial value of static variable: %d\n",initial_num2);
 }
 //extern storage class
 void display4(){
 int ex=100;
 printf("\nvalue of extern variable: %d\n",ex);
 ++ex;
 printf("\n after increment the value of extern variable: %d\n",ex);
 printf("the initial value of extern variable : 0 \n");
 }
 // regiser storage class
 void display5(){
 register int regi1=300; // extern variable can be declare in anyware in program and it can be easily access.
 register int initial_regi2;
 printf("\nvalue of register variable: %d \n",regi1);
 printf("\nthe initial value of register variable: %d (some garbage value)\n",initial_regi2);
 }

