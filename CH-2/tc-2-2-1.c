#include<stdio.h>
main()
{
	int r;
	float pi=3.14,arc;
	
	printf("enter redius : ");
	scanf("%d",&r);
	
	arc=pi*r*r;
	
	printf("area of circle : %.2f",arc);
}
