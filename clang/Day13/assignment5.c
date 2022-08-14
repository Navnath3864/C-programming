#include<stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    char name[10];
    int roll_num,marks;
    fp=fopen("binfile.txt","wb");

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
        scanf("%d",&roll_num);

        printf("%d. Enter Name :",i+1);
        scanf("%s",name);

        printf("%d. Enter Marks :",i+1);
        scanf("%d",&marks);

        //fwrite("Roll num =%d\n name of student %s\n Marks= %d\n ",roll_num,name,marks,fp);
        // fwrite(fp,"name of student %s\n",name);
        // fwrite(fp,"Marks= %d\n\n",marks);
        fwrite(&roll_num,sizeof(roll_num),1,fp);
        fwrite(&name,sizeof(name),1,fp);
        fwrite(&marks,sizeof(marks),1,fp);  

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
                if(fread(&roll_num,sizeof(roll_num),1,fp)==1)
                printf("Roll num =%d\n name of student %s\n Marks= %d\n ",roll_num,name,marks,fp);
                else
                break;
        }
    fclose(fp);

    return 1;

}
