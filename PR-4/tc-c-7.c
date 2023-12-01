#include<stdio.h>
main()
{
	int i,j,n,s;
	
	printf("enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(s=1;s<=n-i;s++){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(s=1;s<=n-i;s++){
			printf(" ");
		}
		for(j=5;j>=i*2-1;j--){
			printf("*");
		}
		printf("\n");
	}
	printf("* * * * * * * ");
}
