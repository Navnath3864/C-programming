#include<stdio.h>
int main()
	{
	int size,count,i,j;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int freq[size];
	int arr[size];
	printf("Enter the Element in array\n");
	for(i=0;i<size;i++)
		{
		scanf("%d ",&arr[i]);
		freq[i]=-1;
		}
		for(i=0;i<size;i++)
			{
		            count=1;
			for(j=i+1;j<size;j++)
				{
				if(arr[i]==arr[j])
					{
					count++;
					freq[j]=0;
					}	
				}
			if(freq[i]!=0)
				{
				freq[i]=count;
				}
		       }		
				
				printf("Frequency of element in this array\n");
			for( i=0;i<size;i++)
				{
				if(freq[i]!=0){
				
				printf("%d prasents %d times\n",arr[i],freq[i]);
				}
	}	
			
	return 0;
	}
