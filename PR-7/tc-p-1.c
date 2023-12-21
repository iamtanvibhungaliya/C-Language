#include<stdio.h>

int sum (int a,int b)
{
	return a+b;
}
int sub (int a,int b)
{
	return a-b;
}
int multy (int a,int b)
{
	return a*b;
}
int div (int a,int b)
{
	return a/b;
}
int mod (int a,int b){
	return a%b;
}
main ()
{
	int a,b,choice;
	
	do 
	{
		printf("enter...\n")
		printf("press 1 for sum\n");
		printf("press 2 for sub\n");
		printf("press 3 for multy\n");
		printf("press 4 for div\n");
		printf("press 5 for mod\n");
		printf("press 0 for exit\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 :
			
			printf("Enter value of a : ");
			scanf("%d",&a); 
			printf("Enter value of b : ");
			scanf("%d",&b);
			
			printf("The sum of a and b is : %d\n",sum(a,b));
			break;
			
			case 2 :
			
			printf("Enter value of a : ");
			scanf("%d",&a); 
			printf("Enter value of b : ");
			scanf("%d",&b);
			
			printf("The sub of a and b is : %d\n",sub(a,b));
			break;
			
			case 3 :
			
			printf("Enter value of a : ");
			scanf("%d",&a); 
			printf("Enter value of b : ");
			scanf("%d",&b);
			
			printf("The multy of a and b is : %d\n",multy(a,b));
			break;
			
			case 4 :
			
			printf("Enter value of a : ");
			scanf("%d",&a); 
			printf("Enter value of b : ");
			scanf("%d",&b);
			
			printf("The div of a and b is : %d\n",div(a,b));
			break;
		
			case 5 :
				
			printf("enter value of a : ");
			scanf("%d",&a);
			printf("enter value of b : ");
			scanf("%d",&b);
			
			printf("the mod of a & b : %d\n",mod(a,b));
			break;
			
			case 0 :
				break;
				
			default:
				printf("invalid input");
				}
	}while(choice !=0);
}
