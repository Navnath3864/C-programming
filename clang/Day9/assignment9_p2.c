#include<stdio.h>
void uppercase(char *str);
int main(){
	char ch[50];
	printf("Enter your String\n");
	scanf("%s",ch);
	uppercase(ch);
	
return 0;
}

void uppercase(char *str)
{
	char *ptr;
	ptr=str;
	
	
	
	for(int i=0;*ptr!='\0';i++)
	{
		if(*ptr>='a' && *ptr<='z')
		{
			*ptr=*ptr-32;
			*ptr++;
		}	
	
	}
	
	printf("the given String in upper case= %s\n",str);
} 
