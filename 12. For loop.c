#include<stdio.h>

void main()
{
	int i=0;
	
	for(i=0; i<11; i++)
	//for loop has syntax of for(this condition){do this statement}
	//In here, the condition is increase i's value up until it reaches less than 11 which is 10.
	
	{
		printf("%d\n",i);
	}
	//Thus, the for loop will print first 0, then 1 up until the value 10 as it is incremented.
	
	getch();
}
