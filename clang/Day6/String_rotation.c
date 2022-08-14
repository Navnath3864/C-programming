#include<stdio.h>
#include<string.h>
int main()
	{
	int n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	char str[n];
	char temp[n];
	
	printf("Enter your String: \n");
	scanf("%s",str);
	for(int i=0;i<n;i++){
	int j=i;
	int k=0;
	while(str[j]!='\0'){
	temp[k]=str[j];
	k++;
	j++;
	}
	j=0;
	while(j<i){
	temp[k]=str[j];
	j++;
	k++;
	}  
	printf("%s\n",temp);
	}
	return 0;
	}
