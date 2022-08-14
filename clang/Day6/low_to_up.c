#include<stdio.h>
#include<string.h>
int main()
	{
	char ch[100];
	printf("Enter your string: ");
	scanf("%s",ch);
	for(int i=0;ch[i]!='\0';i++){
	if(ch[i]>='a'&& ch[i]<='z'){
	ch[i]=ch[i]-32;
	}
	}
	printf("the given string in uppercase format: %s\n",ch);
	return 0;
	}
