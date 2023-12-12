//e-mail validation//
/*
	=> must have  letter , small, digits ,symbols ,
	@,domail name
	=>without space

*/
#include<stdio.h>
main()
{
	char eml[30],psw[30];
	int i,cap=0,let=0,sml=0,dgt=0,sp=0,sym=0,dmn=0;
	
	printf("enter email id : \n");
	scanf("%[^\n]",&eml);
	printf("enter password id : \n");
	scanf("%[^\n]",&psw);
	
	for(i=0;eml[i] != '\0';i++){
		
		if(psw[i]>=65 && psw[i]<=90){
			cap++;
		}
		else if(eml[i]>=97 && eml[i]<=122){
			sml++;
		}
		else if(eml[i]>=48 && eml[i]<=57){
			dgt++;
		}
		else if(sp==' '){
			sp++;
		}
		else if(eml[i]==46){
			dmn++;
		}
		else if(eml[i]==64){
			sym++;
		}
		let++;
	}
	if(let>8 && cap >0 && sml>0 && dgt>0 && sp==0 && sym>0 && dmn>0){
		printf("valid!!");
	}
	else{
		printf("invalid!!");
	}
}
