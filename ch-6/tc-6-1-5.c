#include<stdio.h>
main()
{
	int i,n;
	
	printf("enter first number  : ");
	scanf("%d",&i);
	
	printf("enter second number :");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%4==0){
			printf("%d ",i);
		}
		i++;
	}
}
