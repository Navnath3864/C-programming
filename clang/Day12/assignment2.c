#include<stdio.h>

#define INT_add 
#define FLOAT_add

int main()
{
    float i1,i2;

    printf("Enter two int or float values \n");
    scanf("%f %f",&i1 ,&i2);

    #ifdef INT_add
    {
        printf("Addition of two integer %.f \n\n",i1+i2);
    }
    #else
    {
        printf("INT_add is not present\n\n");
    }
        
    #endif

    #ifdef FLOAT_add
    {
        printf("Addition of two Float %f \n\n",i1+i2);
    }
    #else
    {
        printf("FLOAT_add is not present\n\n");
    }
    #endif

    return 1;
}
