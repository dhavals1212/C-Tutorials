#include<stdio.h>

int add(int x, int y)
//We defined a function here with name "add".
//This function will have int data type.
//All functions do not have to have necessarily any condition inside the parenthesis.
//In the condition, we defined both x and y as integers.

{
	return x+y;
	//We defined inside this a return function that is suppposed to return the addition.
}

//The function has been created. It has to be called or invoked to be used directly by use of 'add()'.
void main()
{
	printf("%d", add(10,23));
	//Here we invoked the add function.
	//Because we had added parameters to this function in its parenthesis, we'll have to give parameters here.
	//Those two parameters have to be integer values as we saw in the function we created above.
	//When the compiler runs the main function it will return the 33 on screen.
	
	getch();
}
