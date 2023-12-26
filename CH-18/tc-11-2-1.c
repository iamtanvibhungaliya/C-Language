//wap to reverse array with pinter //
#include<stdio.h>
void reversearray(int ar , int size)
{
	int temp;
	
	if(size<=1)
	{
		return;
	}
	int *start = ar;
	int *end = ar+size-1;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end = temp;
		
		start++;
		end--;
	}
}

void printarray(int *ar,int size )
{
	int i;
	for(i=0;i<size;i++){
		printf("%d",ar[i]);
	}
	printf("\n");
}

int main()
{
	int size;
	
	printf("enter array size : ");
	scanf("%d",&size);
	
	if(size<=0){
		return 1;
	}
	
	int *ar =(int*)malloc(size * sizeof(int));
	
	printf("enter the elments of the array ");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	reversearray(ar,size);
	
	printf("reverse array :");
	
	printarray(ar,size);
	
	free(ar);
	return 0;
	
}
