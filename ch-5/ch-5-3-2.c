#include<stdio.h>

main()
{
	int choice;

	printf("Enter...\n");
	printf("1)Press 1 for English\n");
	printf("2)Press 2 for Hindi\n");
	printf("3)Press 3 for Gujarati\n");
	
	printf("Enter Your choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("You've Press 1 for English...\n");
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-Up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			printf("Enter Your choice : ");
			scanf("%d",&choice);

		switch(choice)
		{
			 case 1:
				printf("You have successfully done Internet Recharge\n");
				break;
			 case 2:
				printf("You have successfully done Top-Up Recharge\n");
				break;
			 case 3:
				printf("You have successfully done special Recharge\n");
				break;
		}
			break;

		case 2:
			printf("You've Press 2 for Hindi...\n");
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-Up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
			
			printf("Enter Your choice : ");
			scanf("%d",&choice);
			
		switch(choice)
		{
			case 1:
				printf("Aapne safaltapurvak Internet Recharge kar liya he\n");
				break;
			case 2:
				printf("Aapne safaltapurvak Top-Up Recharge kar liya he\n");
				break;
			case 3:
				printf("Aapne safaltapurvak Special Recharge kar liya he\n");
				break;
		}
			break;

		case 3:
			printf("You've Press 3 for Gujarati...\n");
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-Up Recharge mate 2 dabavo\n");
			printf("Special recharge mate 3 dabavo\n");
			
			printf("Enter Your choice : ");
			scanf("%d",&choice);
			
		switch(choice)
		{
			case 1:
				printf("Tame safaltapurvak Internet Recharge karyu chhe\n");
				break;
			case 2:
				printf("Tame safaltapurvak Top-Up Recharge karyu chhe\n");
				break;
			case 3:
				printf("Tame safaltapurvak Special Recharge karyu chhe\n");
				break;
		}
			break;

		default:
			printf("Invalid Number");
	}
}
