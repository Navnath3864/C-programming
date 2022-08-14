#include<stdio.h>
#include<stdarg.h>
double avg(int num,...)
{
	va_list list;
	double sum =0.0;
	int i;
	/* initailize valist for num number of arguments*/
	va_start(list,num);
	/* access all the arguemnets assigned to a valist*/
	for(i=0;i<num ; i++)
	{
		sum+=va_arg(list,int);

	} 	

	/*clean memory reserved for list */
	va_end(list);
	return sum/num;
}
int main()
{
	printf("average of 2,3,4,5 = %f \n",avg(4,2,3,4,5));


}
