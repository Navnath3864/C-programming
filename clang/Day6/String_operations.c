#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
	{
	char string1[20];
	char string2[20];
	printf("Enter your first string\n");
	scanf("%s",string1);
	//gets(string1);
	printf("Enter your second string\n");
	scanf("%s",string2);
	//gets(string2);
	 if(strcmp(string1,string2)){
        printf("the Given String is Not same\n");
        }
        else{
        printf("the Given String is same \n");
        }
        strcat(string1,string2);
        printf("after concatinating string 1 and string 2: %s \n",string1);
        printf("length of String1= %ld \n",strlen(string1));
        printf("length of String2= %ld \n",strlen(string2));
        printf("copy String 2 into string 1:%s \n",strcpy(string1,string2));
        return 0;
	}
