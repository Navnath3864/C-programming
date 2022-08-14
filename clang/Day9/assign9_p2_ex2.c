#include<stdio.h>
int main()
	{
	char *color[6]={"red","green","blue","white","black","yellow"};
	// a. what is the meaning of color?
	//ans: color is the charater pointer array which store some element.
	// color is the base address of array
	
	printf("color: %p \n",color);
	
	// a. what is the meaning of (color+1)?
	//ans:color+1 provide the base address of second element. 
	
	printf("color+1: %p \n",color+1);
	
	printf("the value of *color: %s \n",*color);
	printf("the value of *(color+2): %s \n",*(color+2));
	
	//how color[5] and *(color+5) are different?
	//color[5] provide direct value using index number but *(color+5) provided the value using pointer.
	
	printf("color[5]: %s \n",color[5]);
	
	printf("*(color+5): %s \n",*(color+5));
	
	
	return 0;
	}
