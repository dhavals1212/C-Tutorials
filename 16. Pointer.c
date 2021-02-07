#include<stdio.h>

int main()
{
	int a=20;
	int *p=&a;
	//Here to make a pointer, we give the variable '*' ahead of it.
	//&a means the address of the variable a.
	//This assignment will store the address of a into the pointer variable p.
	
	printf("Address of a: %x\n", p);
	//To call the pointer itself, we invoke it with '%x'.
	
	printf("Value of a: %d", a);
	
	getch();
}
