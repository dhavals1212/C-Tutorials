#include<stdio.h>

void main()
{
	int a=10, b=20;
	
	printf("A=10, B=20\n");
	
	if (a>b)
	{
		printf("A is greater than B.");
	}
	//Here, if statement is a conditional statement or known as flow control statement.
	//Syntax is: if (condition){Statement}.
	//The compiler will check the condition of the statement if it is true, it will execute the statement inside it.
	else
	//'else' will only be executed if the condition in 'if' is false.
	
	printf("B is greater than A.");
	
	getch();
}
