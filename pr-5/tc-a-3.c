#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter colum size : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c];
	int i,j;
	
	
	printf("enter array elements : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("the matrix of an array : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			b[j][i]=a[i][j];
		}
	}
	
	printf("the transpote matrix of an array : \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
