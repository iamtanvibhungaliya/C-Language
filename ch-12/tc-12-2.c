#include<stdio.h>
main()
{
	int n,i;
	
	float num[100],sum=0.0,avg;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("%d.enter number : ",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	avg=sum/n;
	printf("avvarge : %.2f ",avg);
	
	
}
