#include<stdio.h>
#include<string.h>

struct students{
	int id;
	char name[20];
	float per;
}s;

void main()
{
	FILE *fp,*fp2;
	
	fp=fopen("C:\\Users\\INDIA\\Desktop\\tanvi.xls","r");
	fp2=fopen("C:\\Users\\INDIA\\Desktop\\tanvi.txt","a");
	
	if(fp != NULL){
		fscanf(fp,"%d",&s.id);
		fscanf(fp,"%s",&s.name);
		fscanf(fp,"%.2f",&s.per);
		
		fprintf(fp2,"Id\t : %d\nName\t:%s\nper\t:%.2f\n",s.id,s.name,s.per);
		
		printf("Operation completed !!\n");
	}
		
	else
	{
		printf("Failed to open a file !!");
	}
	
	fclose(fp);
}
