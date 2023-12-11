#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter 1st number : \n");
	scanf("%d",&a);
	
	printf("enter 2nd number : \n");
	scanf("%d",&b);
	
	printf("enter 3rd number : \n");
	scanf("%d",&c);
	
	printf("enter 4th number : \n");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("maximum num : %d",a);
			}
			else{
				printf("maximum num : %d",d);
			}
			
		else{
			if(c>d){
				printf("maximum num :%d",c);
			}
			else{
				printf("maximum num :%d",d);
			}
		}
	}
	}
	
	else{
		if(b>c){
			if(b>d){
				printf("maximum num : %d",b);
			}
			else{
				printf("maximum num : %d",d);
			}
		}
		else{
			if(c>d){
				printf("maimum num : %d",c);
			}
			else{
				printf("maximum num : %d",d);
			}
		}
	}
	
}
