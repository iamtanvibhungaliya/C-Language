#include<stdio.h>

struct marksheet
{
	int rn;
	char name[120];
	int che;
	int maths;
	int phy;
};

void main()
{
	struct marksheet data[5];
	
	int i;
	
	printf("=====students data=====");
	
	for(i=0;i<5;i++){
	
		printf("enter students name : ");
		scanf("%s",data[i].name);
		
		printf("enter students roll number : ");
		scanf("%d",data[i].rn);
		
		printf("chemistry : ");
		scanf("%d",data[i].che);
		printf("maths  : ");
		scanf("%d",data[i].maths);
		printf("physics : ");
		scanf("%d",data[i].phy);
	}
	
	for(i=0;i<5;i++){
		printf("students roll number : %d",data[i].rn);
		printf("name : %s",data[i].name);
		printf("chemistry : %d",data[i].che);
		printf("maths: %d",data[i].maths);
		printf("physics: %d",data[i].phy);
		
		printf("total : %d",data[i].che+data[i].maths+data[i].phy);
		printf("per : %d",((data[i].che+data[i].maths+data[i].phy)*100)/300);
	}
}
