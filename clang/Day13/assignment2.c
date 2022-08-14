#include <stdio.h>
#include <stdlib.h>
int main(){
   FILE * file;
   char ch;
   int characters, words, lines;
   file = fopen("/home/osboxes/Public/file1.txt", "r");
   if (file == NULL){
      printf("\nUnable to open file.\n");
      exit(EXIT_FAILURE);
   }
   characters = words = lines = 0;
   while ((ch = fgetc(file)) != EOF){
      characters++;
   if (ch == '\n' || ch == '\0')
      lines++;
   if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
      words++;
   }
   if (characters > 0){
      words++;
      lines++;
   }
   printf("\nTotal lines = %d\n", lines);
   printf("Total words = %d\n", words);
   printf("Total characters = %d\n", characters);
   fclose(file);
   return 0;
}
