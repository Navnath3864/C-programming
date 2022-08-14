#include<stdio.h>

int main(){
int n,fact=1;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=n;i>0;i--){
fact=fact*i;
}
printf("%d\n",fact);
return 0;
}
