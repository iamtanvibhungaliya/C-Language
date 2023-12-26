#include<stdio.h>
main()
{
	int a;

	printf("Enter Any Number : ");
	scanf("%d",&a);

	if(a == 0)
	{
		printf("This Number is Neutral");
	}
	else if(a < 0)
	{
		printf("This Number is Negetive");
	}
	else
	{
		printf("This Number is Positive");
	}

}
