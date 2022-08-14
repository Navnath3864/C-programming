#include<stdio.h>
int main(int argc,char *argv[])
{
    if(argc==1)
    {
        printf("Please Enter arguments\n\n");
        return 1;
    }
    
    for(int i=1;i<argc;i++)
    {
        printf("[%d] = %d \n",i,atoi(argv[i]));
    }

    int min=atoi(argv[1]);

    for(int i=1;i<argc;i++)
    {
        if(min>(atoi(argv[i])))
        {
            min=atoi(argv[i]);
        }
    }
    printf("\nMinimum Value = %d \n\n",min);

    int max=atoi(argv[1]);
    for(int i=1;i<argc;i++)
    {
        if(max<(atoi(argv[i])))
        {
            max=atoi(argv[i]);
        }
    }
    printf("Maximum Value = %d \n\n",max);
}
