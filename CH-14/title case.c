#include<stdio.h>
main()
{
	char str[20];
	
	printf("enter name : ");
	gets(str);
	
	if(str[0]>=97 && str[0]<=122 ){
		str[0]-= 32;
	}
	printf("name : %s",str);
	
}
