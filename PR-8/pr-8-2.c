#include<stdio.h>

void cube(int r , int c ,int a[r][c])
{
	
	int *ptr[r][c],i,j;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			ptr[i][j]=&a[i][j];
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
		}
			printf("\n");
	}
}

int main()
{
	int r,c,i,j,a[r][c],ptr;
	
	printf("enter array size : ");
	scanf("%d",&r,&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	cube(r,c,a[r][c]);
}
