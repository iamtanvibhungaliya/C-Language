#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("enter first number : ");
	scanf("%d",&n1);
	printf("enter second number : ");
	scanf("%d",&n2);
	
	if(n1<n2){
		printf("the minimum number is : %d",n2);
	}
	else
	{
		printf("the maximum number is : %d",n1);
	}
}
