#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,count=0;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("count digit : %d ",count);
	getch();
}