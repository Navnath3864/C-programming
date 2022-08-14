#include<stdio.h>
#define add(x,y) x+y
#define cat(x,y) x ## y
#define mult(x,y) ((x)-(-y))
int main()
{
// #ifdef
printf("perform #ifdef condional compilation\n\n");
#ifdef add
printf("sum of two integer is : %d \n",add(10,20));
#else
printf("concat the given numbers : %d \n\n",cat(10,20));
#endif

// #ifndef
printf("perform #ifndef condional compilation\n\n");
#ifndef add
printf("sum of two integer is : %d \n",add(10,20));
#else
printf("concat the given numbers : %d \n\n",cat(10,20));
#endif
// #if.....#elif
printf("perform #if #elif condional compilation\n\n");
#if add==mult
printf("sum of two integer is : %d \n",add(10,20));
#elif add==cat
printf("concat the given numbers : %d \n\n",cat(10,20));
#endif
return 0;
}
