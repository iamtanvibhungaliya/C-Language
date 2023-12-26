#include<stdio.h>

void main()
{
	int n1;
	
	printf("enter array length : ");
	scanf("%d",&n1);
	
	int a[n1],i;
	
	int *ptr;
	
	ptr = &a[n1];
	
	for(i=0;i<n1;i++){
		printf("a[%d] : ",i);
		scanf("%d",&*ptr);
	}
	
	printf("the squares are : ");
	for(i=0;i<n1;i++){
		printf("%d",(*ptr)*(*ptr));
	}
}
