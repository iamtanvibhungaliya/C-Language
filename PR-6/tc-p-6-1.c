#include<stdio.h>
main()
{
	char str1[20],str[20];
	int i,len=0,count=0;
	
	printf("enter string : ");
	scanf("%d[^\n]",&str1);
	
	for(i=0;str1 != '\0' ; i++){
		len++;
	}
	
	for(i=0;i<len;i++){
		str2[len-(i+1)]=str1[i];
	}
	
	for(i=0;i<len;i++){
		if(str2[i]==str1[i]){
		}
			count++;
	}
	
	len == count 
				?printf("palindrome !!")
				:printf("not palindrome !!");

}
