#include<stdio.h>

void main()
{
	int a=10, b=20, c=30;
	
	printf("A=10, B=20, C=30\n");
	if(a>b && a>c)
	{
		printf("A is the greatest value of all.");
	}
	else if(b>a && b>c)
	//'else if' is used in between the if and else statement. It can be written many times.
	
	{
		printf("B is the greatest value of all.");
	}
	else
	printf("C is the greatest value of all.");
	
	getch();
}
