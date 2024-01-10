#include<stdio.h>
main()
{
	int row,colum,i,j,sum=0;
	float avg;
	printf("enter row size : ");
	scanf("%d",&row);
	printf("enter colum size :");
	scanf("%d",&colum);
	
	int a[row][colum];
	printf("enter array elements : ");
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			sum = sum + a[i][j];
		}
	}
	
	avg = sum/(row*colum);
	printf("average of sum : %f",avg);
	
}
