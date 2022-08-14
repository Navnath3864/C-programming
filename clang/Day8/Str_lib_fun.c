#include <stdio.h>
int main()
{
   int len1=0,len2=0;
    char s1[50], s2[50];

    printf("\nEnter the first string: \n");
    scanf("%s",s1);   // inputting first string

    printf("\nEnter the second string to be concatenated: \n");
    scanf("%s",s2);   // inputting second string
    
    //string length
    char *pt1;
    pt1 = s1;
    char *pt2;
    pt2 = s2;
  while (*pt1 != '\0') {
    len1++;
    pt1++;
  }
  printf("Length of String 1 : %d \n", len1);
  
   while (*pt2 != '\0') {
    len2++;
    pt2++;
  }
  printf("Length of String 2 : %d \n", len2);
  //String compare
    char *st1,*st2;
    st1 = s1;
    st2 = s2;

    while(*st1 == *st2)
    {

        if ( *st1 == '\0' || *st2 == '\0' )
            break;

        st1++;
        st2++;

    }

    if( *st1 == '\0' && *st2 == '\0' )
        printf("\n Both Strings Are Equal.\n");

    else
        printf("\n Both Strings Are Not Equal.\n");

    
  //String concatination
    char *a = s1;
    char *b = s2;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  // string must end with '\0'
    printf("\nThe string after concatenation is: %s \n", s1);
    
    // copy String

    char *str1, *str2;
    str1=s1;
    str2=s2;
    int i;
    for(i = 0; *str2 != '\0'; i++, str1++, str2++)
    *str1 = *str2;
    *str1 = '\0';
    str1 = str1 - i;
    printf("\nThe String 2 copied into string 1 is : %s\n", str1);
    
    
    return 0;
}
