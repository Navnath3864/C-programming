#include<stdio.h>

struct binary
{
char name[50];
int roll_num,marks;
};

int main()
{
    FILE *fp;
    char str[100];
    struct binary bin;

    fp=fopen("4_file.txt","wb");

    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
    //fputs("Opening File\n\n",fp);

    int i,num=0;

    printf("enter nubmer of Students = ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("\n%d. Enter Roll num :",i+1);
        scanf("%d",&bin.roll_num);

        printf("%d. Enter Name :",i+1);
        scanf("%s",bin.name);

        printf("%d. Enter Marks :",i+1);
        scanf("%d",&bin.marks);

        //fwrite("Roll num =%d\n name of student %s\n Marks= %d\n ",roll_num,name,marks,fp);
        // fwrite(fp,"name of student %s\n",name);
        // fwrite(fp,"Marks= %d\n\n",marks);
        fwrite(&bin,sizeof(bin),1,fp);

    }
    fclose(fp);

    fp=fopen("4_file.txt","r");
    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
    while(1)
        {
                
                printf("Roll num =%d\n name of student %s\n Marks= %d\n ",bin.roll_num,bin.name,bin.marks);
               
                break;
        }
    fclose(fp);

    return 1;

}
