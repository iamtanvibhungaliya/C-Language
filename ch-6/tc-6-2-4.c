#include<stdio.h>
main()
{
	int i,n,f,f1=0,f2=0;
	
	printf("enter n :");
	scanf("%d",&n);
	
	printf("fibonacci series : ");
	printf("%d",f1);
	printf("%d",f2);
	
	for(i=2;i<=n;i++){
		f=f1+f2;
		f1=f2;
		f2=f;
		
		printf("%d",f);
	}
}
