#include<stdio.h>
#include<stdbool.h>

void main()
{
	bool a=true, b=false;
	
	printf("LOGICAL OPERATORS:\n\n");
	printf("A=True, B=False\n");
	printf("A and B is: %d\n", a&&b);
	printf("B and A is: %d\n", b&&a);
	printf("B and B is: %d\n", b&&b);
	printf("A and A is: %d\n", a&&a);
	//'&&' indicates 'And' Operator.
	//According to the logic of && operator, the restult will only be true if all operands are true.
	
	printf("A or B is: %d\n", a||b);
	printf("B or A is: %d\n", b||a);
	printf("A or A is: %d\n", a||a);
	printf("B or B is: %d\n", b||b);
	//'||' indiactes 'Or' Operator.
	//According to the logic of || operator, the result will be true if any one operand is true.
	
	getch();
}
