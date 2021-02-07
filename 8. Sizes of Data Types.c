#include<stdio.h>

void main()
{
	int a;
	float b;
	double c;
	char d;
	
	printf("Size of Integer variable is %ld bytes.\n", sizeof(a));
	printf("Size of Float variable is %ld bytes.\n", sizeof(b));
	printf("Size of Double variable is %ld bytes.\n", sizeof(c));
	printf("Size of Character variable is %ld bytes.\n", sizeof(d));
	//'sizeof' determines the size of the data types.

	getch();
}
