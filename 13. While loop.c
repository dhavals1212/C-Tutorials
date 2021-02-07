#include<stdio.h>

void main()
{
	int i=0;
	
	while(i<5)
	//while loop has syntax of while(this condition is true){run this statement}
	
	{
		printf("%d\n",i);
		i++;
	}
	//In here, the condition is up until the value of i is 4, it should be printed from 0 to 4 with increment each time.
	
	getch();
}
