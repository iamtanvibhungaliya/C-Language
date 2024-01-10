#include<stdio.h>

struct employe
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int experiance;
	char compnyname[20];
};

int main()
{
	int n;
	printf("enter the number of employe : ");
	scanf("%d",&n);
	
	int i;
	
	struct employe e[n];
	
	for(i=0;i<n;i++){
		printf("enter emp id : ");
		scanf("%d",&e[i].id);
		printf("enter emp name : ");
		scanf("%s",e[i].name);
		printf("enter emp  age : ");
		scanf("%d",e[i].age);
		printf("enter emp role : ");
		scanf("%s",&e[i].role);
		printf("enter emp city : ");
		scanf("%s",&e[i].city);
		printf("enter emp experience : ");
		scanf("%d",&e[i].experiance);
		printf("enter compny name : ");
		scanf("%s",&e[i].compnyname);
	}
	
	printf("\n=====emp record =====");
	
	for(i=0;i<n;i++){
		printf("id : %d\n",e[i].id);
		printf("name : %s\n",e[i].name);
		printf("age : %d\n",e[i].age);
		printf("role: %s\n",e[i].role);
		printf("city : %s\n",e[i].city);
		printf("experience : %d\n",e[i].experiance);
		printf("compny name : %s",e[i].compnyname);
	}
}
