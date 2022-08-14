#include<stdio.h>
void lowercase(char *po);
int main()
{
char ch[50];
printf("Enter your String\n");
scanf("%s",ch);
lowercase(ch);

return 0;
}
void lowercase(char *po)
{
	int i=0;
	while(po[i]!='\0')
	{
		if(po[i]>='A' && po[i]<='Z')
		{
			po[i]=po[i]+32;
			i++;
		}
	}
   printf("the given String in Lower case: %s \n",po);

}
