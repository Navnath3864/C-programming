#include<stdio.h>
#include<string.h>
int main()
	{
	int c1=0;
	int c2=0;
	char str[10],*p;
	printf("Enter the String\n");
	scanf("%s",str);
	p=str;
	while(*p!='\0')
		{
		if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
			c1++;
		else
			c2++;
	 	p++;
		}
		printf("vowels: %d constant: %d \n",c1,c2);
	return 0;
	}
