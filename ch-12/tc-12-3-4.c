#include<stdio.h>
main()
{
	int a[5][5],i,j,sum=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("array elments : ");
			scanf("%d",&a[i][j]);
			
		}
	}
	
	printf(" boundry elements : \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0||j==0||i==4||j==4){
				printf("%d",a[i][j]);
				sum+=a[i][j];
			}
			else
			{
				printf("  ");
			}
		
		}
		printf("\n");
	}
	printf("the sum of boundry elements : %d ",sum);
	
}
