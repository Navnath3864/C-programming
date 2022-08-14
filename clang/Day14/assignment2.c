#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fp,*fp2;
    char str;
    fp=fopen(argv[1],"a+");

    if(fp == NULL)
    {
        perror("\nError opening file \nPlease Enter File name to Write in file\n\n");
        return(-1);
    }

    int i,num=0,roll_num=0,marks=0;
    char name[10];
    
    printf("enter nubmer of Students = ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("\n%d. Enter Roll num :",i+1);
        scanf("%d",&roll_num);

        printf("%d. Enter Name :",i+1);
        scanf("%s",name);

        printf("%d. Enter Marks :",i+1);
        scanf("%d",&marks);

        fprintf(fp,"Roll num =%d\n",roll_num);
        fprintf(fp,"name of student %s\n",name);
        fprintf(fp,"Marks= %d\n\n",marks);
    }
    fclose(fp);

    fp2=fopen(argv[1],"r");
    if(fp == NULL)
    {
        perror("\nError opening file \nPlease Enter File name to Write in file\n\n");
        return(-1);
    }
    while((str=fgetc(fp2)) !=EOF)
    {
        fputc(str,fp2);
    }
    fclose(fp2);

    return 1;

}
