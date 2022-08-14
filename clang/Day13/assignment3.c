#include<stdio.h>
int main()
{
    char ch;
    FILE *fp1, *fp2, *fp3;

    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","r");

    if(fp1==NULL ||fp2==NULL)
    {
        perror("ERROR file1 or file 2");
    }

    fp3=fopen("3_File_conct.txt","a+");

    if(fp3==NULL)
    {
        perror("ERROR in File 3");
    }

    while((ch=fgetc(fp1)) !=EOF)
    {
        fputc(ch,fp3);
    }

    while((ch=fgetc(fp2)) !=EOF)
    {
        fputc(ch,fp3);
    }


    fclose(fp1);
    fclose(fp2);
    fclose(fp2);

}
