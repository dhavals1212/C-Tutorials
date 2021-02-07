#include<stdio.h>

int main()
{
	int e=20;
	
	printf("E=20\n");
	switch(e)
	//'switch' is a function that can store a variable with value.
		
	{
		case 10:
			printf("The value is 10.");
		break;
		//Here if the case 10 justifies the command inside it will be executed and the switch will break.
		//Break practically exits the command after execution.
				
		case 20:
			printf("The value is 20.");
		break;
			
		default:
			printf("The value is not present.");
		break;
		//default is the last case scenario. It is not necessary.
	}
	
	return 0;
	getch();
}
