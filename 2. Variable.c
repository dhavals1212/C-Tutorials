#include<stdio.h>

void main()
{
	int a = 10;
	//The above command defines a variable 'a' and assigns it the value '10'.
	//'int' is a data type it is anywhere from (-infinite, +infinite).
	//The command says store the value 10 to the integer data type a.
	
	printf("A is %d", a);
	//In here, the compiler takes '%d' as a variable value.
	//Which variable is it, it determines by reading after the ',' and the name of that variable.
	//The above command will print A is 10.
	//Since the variable type is integer, we write %d. For floating type, we write %f.
	//For character type, we write %c, double is denoted by %lf, for string we denote %s.
	//Variables..., as the name suggests have values that can be changed.
	
	getch();
}
