#include <stdio.h>
int main()
{
  int row,col1,col2;
  printf("enter the row col1,col2 values: \n");
  scanf("%d %d %d",&row,&col1,&col2);
  int arr[row][col1][col2];

  printf("Enter %d values: \n",row*col1*col2);

  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col1; ++j)
    {
      for (int k = 0; k < col2; ++k)
      {
        scanf("%d", &arr[i][j][k]);
      }
    }
  }
 printf("\nDisplaying values:\n");
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < col1; ++j)
    {
      for (int k = 0; k < col2; ++k)
      {
        printf("array[%d][%d][%d] = %d prasent at adress %p \n", i, j, k, arr[i][j][k],&arr[i][j][k]);
      }
    }
  }

  return 0;
}
