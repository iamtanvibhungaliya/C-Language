#include<stdio.h>
void main()
{
	int a,b,i;
	FILE *even,*odd;
	
	even = fopen("even_file.txt",'w');
	odd = fopen("odd_file.txt",'w');
	
	printf("enter starting number : ");
	scanf("%d",&a);
	printf("enter Ending number : ");
	scanf("%d",&b);
	
	for(i=0;i<=b;i++){
		if(i%2==0){
			fprintf("even: %d",i);
			printf("even : %d",i);
		}
		
		else
		{
			fprintf("odd :%d",i);
			printf("odd : %d",i);
		}
	}
	
	fclose(even);
	fclose(odd);
}
