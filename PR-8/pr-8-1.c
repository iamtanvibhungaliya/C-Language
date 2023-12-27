#include<stdio.h>

int lengthstring(char *str)
{
	int length=0;
	
	while(*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}

int main()
{
	char str[100];
	
	printf("enter string : ");
	scanf("%s",str);
	
	int length = lengthstring(str);
	
	printf("length of the string : %d\n",length);
	
	return 0;
}
