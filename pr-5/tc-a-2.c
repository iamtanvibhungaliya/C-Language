#include<stdio.h>
main()
{
	int r,c;
	
	printf("enter row : ");
	scanf("%d",&r);
	printf("enter colum :");
	scanf("%d",&c);
	
	int a[r][c],i,j,max;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(max>a[i][j]){
				max=a[i][j];
			}
		}
	}
	
	printf("the largest elements is : %d",max);
}
