#include<stdio.h>
main()
{
	int r,c;
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter colum size :")
	scanf("%d",&c);
	
	int [r][c],n1,n2,rsum=0;csum=0,i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("enter row number  : \n");
	scanf("%d",&n1);
	
		printf("elements of row : %d",n1);

		for(j=0;j<c;j++){
			printf("%d",a[n1][j]);
			rsum+= a[n1][j];
		}
		
	printf("sum of the row : %d \n",rsum);
	
	printf("enter colum num : \n");
	scanf("%d",&n2);
	
		printf("elements of colum : %d",n2);
	
	for(i=0;i<r;i++){
		printf("%d\n",a[i][n2]);
		csum += a[i][n2];
	}
	printf("sum of the colum : %d",csum);
}
