#include<stdio.h>
#include"my_function.c"
main()
{
	int r,c;
	
	printf("enter row size : ");
	r = getInt();
	printf("enter colum size : ");
	c = getInt();
	
	array2dinput(a,r,c);
	array2doutput(a,r,c);
}
