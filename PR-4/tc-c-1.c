#include<stdio.h>
main()
{
	int i,j,a=11;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",a);
			a+=11;
		}
		printf("\n");
	}
}
