#include<stdio.h>
main()
{
	int n;
	printf("enter of array size:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	for(i=0;i<n;i++){
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
		printf("enter b[%d] :",i);
		scanf("%d",&b[i]);
		
		c[i] = a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<n;i++){
	printf("elements of a : %d\n",a[i]);
	printf("elements of b : %d\n",b[i]);
	printf("sum = %d\n",c[i]);
}


}
