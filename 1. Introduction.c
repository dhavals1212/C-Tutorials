#include<stdio.h>
//The above is the Preprocessor Directive. We choose what libraries already to include.
// We get to choose the functions ahead in the programming from the included libraries.

void main()
//The execution begins here. In C language, the void function basically tells to execute the inside function.
//This function is called main. Void indicates there won't be any values that will be predefined or return.

{
	printf("Hello World!");
	//Here the 'printf' is a common function that executes the function to print messages.
	//It is always followed by the ';' sign which indicates end of the command.
	//This is putting output to console.
	
	getch();
	//'getch()' directs to get the value that the compiler is supposed to.
	// It is always written in the end.
	//This executes after any key is pressed.
}

//The function is always written in '{}'.
// All 'C' files are stored with extension '.c'.
