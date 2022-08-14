#include<stdio.h>
int main()
	{
	int c1=0,c2=0,c3=0,c4=0;
	char a[100];
	printf("Enter the string input: ");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
	if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'){
	c1++;}
	if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
	c2++;}
	if(a[i]=='_'||a[i]=='@'||a[i]=='#'||a[i]=='*'||a[i]=='.'||a[i]=='-'||a[i]=='?'||a[i]=='&'||a[i]=='o'||a[i]=='!'){
	c3++;}
	else{
	c4++;}
	}
	printf("vowels= %d \ndigits= %d\nconstant= %d \nother character= %d\n",c2,c1,c4,c3);
	return 0;
	}
