#include<stdio.h>
int main(){
int n,temp;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the element in array\n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
     }
        for (int i=0;i<n;++i)
        {
            for (int j=i+1;j<n;++j)
            {
                if (a[i]>a[j]) 
                {
                     temp = a[i];
                     a[i] = a[j];
                     a[j] = temp;
                }
            }
        }
        printf("The array element in sorted form \n");

        for (int i=0;i<n;++i)

            printf("%d ",a[i]);
    printf("\n");
return 0;
}
