#include<stdio.h>
int main(){
   int row,col;
   printf("enter the row and columns\n");
   scanf("%d %d",&row,&col);
   int disp[row][col];
   int i, j;
   for(i=0; i<row; i++) {
      for(j=0;j<col;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<row; i++) {
      for(j=0;j<col;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   
   printf("Two Dimensional array elements with address :\n");
   for(i=0; i<row; i++) {
      for(j=0;j<col;j++) {
         printf("element %d prasent at address %p \n",disp[i][j],&disp[i][j]);
      }
   }
   return 0;
}
