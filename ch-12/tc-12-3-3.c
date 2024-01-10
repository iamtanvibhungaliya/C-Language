#include<stdio.h>
main()
{
	int a[3][3],r,c,i,j,sum=0;
	
	printf("enter row size : ");
	scanf("%d ",&r);
	printf("enter colum size : ");
	scanf("%d",&c);
	
	printf ("enter array elements : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	
	printf("the sum of diagonal elements : %d",sum);
	
	
	
	
}
