#include<stdio.h> // stdio.h is Standard Input-Output Header library.
#include<conio.h> // conio.h is Console Input-Output Header library.

int main()
//Here the 'int main()' means we are getting an integer value return for main function.

{
	int a=10;
	double b=20.0;
	//Double is a data type.
	
	printf("%d+%lf=%lf", a,b, a+b);
	/* Here, the '%lf' indicates 'double' data type variable's value.
	The a, b and a+b seperated by commas are ready in succession by compiler and they are processed
	for the printed value accordingly.*/
	
	return 0;
	//Here return 0 means we are not returning any important value.
	
	getch();
}

/*Note: Even though we had received the double data type after the summation of int + double inside the function,
we will get 'int' as console output because we defined the main function's value as 'int main()'*/
