#include<stdio.h>
int main()	
	{
	int n,temp;
	int arr[n];
	printf("Enter the size of array \n");
	scanf("%d",&n);
	printf("Enter the elements in array \n");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]==temp;
		}
		else{
		temp=arr[j];
		}
		}
		}
		printf("the greatest number in array is %d\n",temp);
	return 0;
	}
