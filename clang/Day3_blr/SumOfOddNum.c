#include<stdio.h>
int main(){
int n,i=1,sum=0;
printf("Enter the number\n");
scanf("%d",&n);
while(i<=n){
if(i%2!=0){
sum=sum+i;
}
i++;
}
printf("some of odd number : %d\n",sum);
return 0;
}
