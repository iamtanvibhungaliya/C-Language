#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter 1st number : ");
	scanf("%d",&a);
	
	printf("enter 2nd number : ");
	scanf("%d",&b);
	
	printf("enter 3rd number : ");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("minimum number : %d",a);
		}
		else{
			printf("minimum number : %d",c);
		}
		
	else{
		if(b<c){
			printf("minimum number : %d",b);
		}
		else{
			printf("minimum number : %d",c);
		}
	}
	}
}
