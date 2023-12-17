#include<stdio.h>
void divisible (){
	int n;
	printf("enter any number : ");
	scanf("%d",&n);
	
	if(n/3==0 && n/5==0)
	{
		printf("the given number is divisible by 3 or 5 ");
	}
	else
	{
		printf(" the givin number is not divisible by 3 or 5");
	}
}

main()
{
	printf("type any num and show is divisible by 3 or 5");
	divisible();
}
