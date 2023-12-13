#include<stdio.h>
main()
{
	float bs,hra,da,ta,gs;
	
	printf("enter bs:");
	scanf("%d",&bs);
	
	hra = bs*10/100;
	da = bs*5/100;
	ta = bs*8/100;
	
	gs=bs+hra+da+ta;
	
	printf("gross salary : %.2f",gs);
}

