#include<stdio.h>

void main()
{
	int a = 20;
	int b = 10;
	
	printf("RELATIONAL OPERATIONS:\n\n");
	printf("A=20, B=10\n");
	printf("Check if A > B: %d\n", a>b);
	//Since A is greater than B, it is true hence the compiler will show '1' as output.
	printf("Check if A < B: %d\n", a<b);
	//Since A is not less than B, it is false hence the compiler will show '0' as output.
	printf("Check if A is equal to B: %d\n",a==b);
	printf("Chcek if A is not eual to B: %d", a!=b);
	
	getch();
}
