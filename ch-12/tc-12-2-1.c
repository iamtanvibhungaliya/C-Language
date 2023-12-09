#include<stdio.h>
main()
{
	int n,i;
	
	printf("array a size : ");
	scanf("%d",&n);
	
	printf("array b size : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n+n];

	for(i=0;i<n;i++){
		printf("a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("b[%d] : ",i+1);
		scanf("%d",&b[i]);
	}
	
	for (i=0;i<n;i++){
		c[i]=a[i];
	}
	
	for(i=0;i<n+n;i++){
		c[i+n]=b[i];
	}
	
	printf("merge two array : %d ",c[i]);
}
