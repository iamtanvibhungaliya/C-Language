#include<stdio.h>

int getInt()
{
	int n ;
	scanf("%d",&n);
	return n;
}

void arrayinput(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++){
		printf("enter a[%d]: ",i);
		a[i]=getInt();
	}
}

void arrayoutput(int a[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("a[%d]:%d \n",i,a[i]);
	}
}

void arrayneg(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("negative number : %d",a[i]);
		}
	}
}

void array2dinput(int r,int c,int a[][])
{
	int i,j;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter a[%d][%d] : ",i,j);
			a[i][j]=getInt();
		}
	}
}

void array2doutput(int r,int c,int a[][])
{
	int i,j;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d] : %d\n",i,j,a[i][j]);
		}
		printf("\n");
	}
}
