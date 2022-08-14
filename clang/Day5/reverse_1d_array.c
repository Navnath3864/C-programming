#include<stdio.h>
int main()	
	{
	int n,temp;
	int arr[n];
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element in array\n");
	
	//int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
		{
		scanf("%d ",&arr[i]);
		}
		
  			printf("printing the array  element in reverse order\n");
  	/*	for(int i=0;i<n/2;i++)
  			{
  			temp=arr[i];
  			arr[i]=arr[n-i];
  		         arr[n-i]=temp;
  			}
  			*/
  			for(int i=n-1;i>=0;i--){
  				printf("%d ",arr[i]);
  				}
  				printf("\n");
	return 0;
	}
