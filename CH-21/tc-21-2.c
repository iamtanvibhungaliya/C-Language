#include<stdio.h>
main()
{
	int a,b,i;
	FILE *p1,*p2;
	
	p1 = fopen("p1_file.txt",'w');
	p2 = fopen("p2_file.txt",'w');
	
	printf("enter starting number : ");
	scanf("%d",&a);
	printf("enter ending number : ");
	scanf("%d",&b);
	
	for(i=a;i<b;i++){
		if(i%3==1){
			fprintf("div by 3 :%d",i);
		}
		else if(i%5==1){
			fprintf("div by 5 :%d",i);
		}
		else
		{
			printf("none of these !!");
		}
	}
	
	                    
}
