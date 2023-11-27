#include<stdio.h>
#include<conio.h>
main()
{
	int i,first=0,last=0,sum;
	clrscr();
	printf("enter number : ");
	scanf("%d",&i);

	last=i%10;

	while(i>10)
	{
		i=i/10;
	}
		first=i;
		sum = first+last;
			printf("the sum of first and last digit : %d ",sum);

	getch();
}