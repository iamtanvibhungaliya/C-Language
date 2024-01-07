#include<stdio.h>

main()
{
	int p,r,n;
	float smp;
	
	printf("enter p : ");
	scanf("%d",&p);
	printf("enter r : ");
	scanf("%d",&r);
	printf("enter n : ");
	scanf("%d",&n);
	
	smp=(p*r*n)/100;
	
	printf("simple intrest : %.2f",smp);
}
