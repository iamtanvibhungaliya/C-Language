// write  a program to swap two variable using swaping  //
#include<stdio.h>
void swap(int *a , int *b)
{
	*a= *a + *b;
	*b= *a - *b;
	*a= *a - *b;
}

void main()
{
	int x,y;
	
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	
	swap(&x,&y);
	printf("\nx\t: %d\ny\t:%d",x,y);
}
