#include<stdio.h>
main()
{
	char a[30];
	int i;
	
	printf("Enter Character : ");
	scanf("%s",a);

	 for(i=0; i<30; i++)
	 {
	 	if(a[i]>=65 && a[i]<=90)
	 	{
	 		a[i] +=32;
		 }
		 else if(a[i]>=97 && a[i]<=122)
		 {
	 		a[i] -=32;
		 }

	 }
	 printf("Character : %s",a);

}
