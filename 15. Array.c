#include<stdio.h>

void main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	//Here, a[10] represents array.
	//Arrays have variable_name[count_of_elements_inside] structure.
	//It is then assigned values/elements within {} and seperated by comma.
	
	char c[4]={'b','r','u','h'};
	
	int i=0;
	
	for(i=0;i<10;i++)
	{
		printf("%d\n", a[i]);
		//Here, the a[i] is called. Which means each individual element starting from 0 upto 10 will be printed.
		
	}
	for(i=0;i<4;i++)
	{
		printf("%c", c[i]);
	}
	
	getch();
}
