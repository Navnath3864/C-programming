#include<stdio.h>
int main()
	{
	int row,col,r1=0,c1=0;
	printf("Enter the number of raw and columns\n");
	scanf("%d %d",&row,&col);
	int a[row][col];
	int b[r1][c1];
	printf("Enter %d element in array\n",row*col);
	for(int i=0;i<row;i++)
	  {
	   for(int j=0;j<col;j++)
	     {
	     scanf("%d",&a[i][j]);
	     }
	  }
	  printf("copy the element in another 2d array\n");
	  for(int i=0;i<row;i++)
	  {
	    for(int j=0;j<col;j++)
	      {
	      b[i][j]=a[i][j];
      	      printf("array[%d][%d]= %d\n",i,j,b[i][j]);
      	    //  i++;
	     // j++;
	      }
	  }
	
	
	return 0;
	}
