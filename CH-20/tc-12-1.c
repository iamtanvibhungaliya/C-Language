#include<stdio.h>
#include<string.h>


struct student 
{
	int id;
	char name[20];
	int age;
	char cource[20];
	char city[20];
	int std;
	char sch[50];
};

void main()
{
	int n,i;
	
	printf("enter array size : ");
	scanf("%d",&n);
	
	struct student s1[n];
	
	fflush(stdin);
	for(i=0;i<n;i++){
	printf("enter id:  ");
	scanf("%d",&s1[i].id);
	printf("\nenter name:  ");
	scanf("%d",&s1[i].name);
	printf("\nenter age:  ");
	scanf("%d",&s1[i].age);
	printf("\nenter course:  ");
	scanf("%d",&s1[i].cource);
	printf("\nenter city:  ");
	scanf("%d",&s1[i].city);
	printf("\nenter std:  ");
	scanf("%d",&s1[i].std);
	printf("\nenter school :  ");
	scanf("%d",&s1[i].sch);
}

	for(i=0;i<n;i++){
		printf("id : %d\n",s1[i].id);
		printf("name :%s\n",s1[i].name);
		printf("age :%d\n",s1[i].age);
		printf("cource :%s\n",s1[i].cource);
		printf("city : %s\n",s1[i].city);
		printf("std : %d\n",s1[i].std);
		printf("school :%s\n",s1[i].sch);
	}
	
}
