#include<stdio.h>
#include"my_function.c"
void main()
{
	int n;
	printf("Enter N : ");
	n = getInt();
	
	ispalindrome(n);
}
