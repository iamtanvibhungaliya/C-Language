#include<stdio.h>
#include"my_function.c"
main()
{
	int n;
	
	printf("enter n : ");
	n = getInt();
	
	int a[n];
	
	arrayinput(a,n);
	arrayoutput(a,n);
	arrayneg(a,n);
}
