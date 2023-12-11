//password validation//
/*
	min 8 letter 
	must have capital,small,digit,symbol
	space
*/
#include<stdio.h>
main()
{
	char psw[30];
	int i,let=0,cap=0,sml=0,dgt=0,sp=0,sym=0;
	
	printf("enter Password : ");
	scanf("%s",&psw);
	
	for(i=0;i<30;i++){
		
		if(psw[i]>=65 && psw[i]<=90){
			cap++;
		}
		else if(psw[i]>=97 && psw[i]<=122){
			sml++;
		}
		else if(psw[i]>=48 && d<=57){
			dgt++;
		}
		else if (sp==' '){
			sp++;
		}
		else  {
			sym++;	
		}
		let++;
	}
	if (let>=8 && cap>=65 && cap<=90 && sml>=97 && sml<=122 && dgt>=48 && dgt<=57 && sp==0 && sym>=0){
		printf("Valide!!");
	}
	else{
		printf("invalide!!");
	}
	
}
