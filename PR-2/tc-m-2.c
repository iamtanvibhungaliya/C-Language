#include<stdio.h>
main()
{
	int unit;
	float bill;
	
	printf("enter unit : ");
	scanf("%d",&unit);
	
	if(unit<=50){
		bill = (unit*0.5);
}
	else if(unit<=150){
		bill=(50*0.5)+(unit-50)*0.75;
	}
	
	else if(unit<=250){
		bill=(50*0.5)+(100*0.75)+(unit-150)*1.20;
	}
	
	else
	{
		bill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250)*1.5;
	}
	
	bill += 0.2;
	printf("enter your electricity bill : %.2f",bill);
	
}
