#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],row,colum,i,j;
	
	printf("enter row size : ");
	scanf("%d",&row);
	printf("enter colum size : ");
	scanf("%d",&colum);
	
	printf ("enter a elements : \n");
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			scanf("%d",&a[row][colum]);
		}		
	}
	
	printf ("enter b elements : \n");
	for(i=0;i<row;i++){
		for (j=0;j<colum;j++){
			scanf("%d",&b[row][colum]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			c[row][colum]= a[row][colum]+b[row][colum];
			
		}
	}
	
	printf(" addition : \n");
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			printf("%d ",c[row][colum]n);
		}
		printf("\n");
	}
	
}
