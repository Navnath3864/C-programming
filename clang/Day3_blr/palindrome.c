#include<stdio.h>
int main(){
int num,rev=0;
printf("Enter the number\n");
scanf("%d",&num);
int numstore=num;
while(num!=0){
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
if(numstore==rev){
printf("The given number is palindrome  number\n");
}
else{
printf("The given number is Not palindrome  number\n");
}
return 0;
}
