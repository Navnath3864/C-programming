#include<stdio.h>
#include<string.h>
int any(char s1[],char s2[]);
int main()
{
char s1[50];
char s2[50];
printf("Enter first String \n ");
scanf("%s",s1);
printf("Enter second String \n ");
scanf("%s",s2);
int temp=any(s1,s2);

if(temp==-1)
	{
	printf("null\n");
	}

else
	{
	printf("%d\n",temp);
	}

return 0;
}
int any(char s1[],char s2[])
{
int i,j;
for(int i=0;i<strlen(s1);i++)
   {
     for(int j=0;j<strlen(s2);j++)
     {
       if(s1[i]==s2[j])
       {
       return i;     
       }	
    }
    j=0;
  }
  return -1;
}
