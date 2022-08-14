#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10],s3[20],s4[20];
	int i,j=0,len1=0,len2=0;
	
	//Input String 
	printf("\nEnter String 1= ");
	scanf("%s",s1);
	printf("\nEnter String 2= ");
	scanf("%s",s2);

	//2 string length
	for(i=0;s1[i]!='\0';i++)
	{
		len1++;
	}
	printf("\nLength of S1 = %d\n",len1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		len2++;
	}
	printf("\nLength of S2 = %d\n",len2);
	
	
	//3 string compare
	int flag=0;
    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
		{ 
			flag=1;
	        break;
		}
    }

	
    if(flag==1)
            printf("\n S1= %s & S2= %s are not same\n",s1,s2);
        else       
            printf("\n S1= %s & S2= %s are same\n",s1,s2);
	

	//4 string  copy
	i=0;
	while(s1[i]!='\0')
	{
		s3[i]=s1[i];
		i++;
	}
	printf("\nS2 is copy to S3 = %s \n",s3);
	
	//4 String reverse
	i=0;
	int len=strlen(s1);
	while(s1[i]!='\0')
	{		
		s2[j++]=s1[len-1-i];
		i++;
	}
	printf("\n Reverse of S1 = %s \n",s2);
	
	//1 string concat
	int len3,len4;
	len3=strlen(s1);
	len4=strlen(s2);
	
	for(i=0;i<=len4;i++)
	{
		s1[len3+i]=s3[i];
	}
	printf("Concat of S1 & S3= %s\n",s1);
	
	return 0;
}
