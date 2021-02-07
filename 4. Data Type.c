#include<stdio.h>
#include<stdbool.h> /*This library contains boolean data type and has to be included for boolean
related data type assignments.*/

void main()
{
	int a = 10;
	float b = 10.45;
	double c = 100.995;
	char d = 'D';
	//'char' is Character data type and can only hole one character value.
	//char and strings both data type have their values stored in between single commas or double commas.
	bool e = true;
	//'bool' is Boolean data type. It only has two values. 'true' and 'false'.
	//Both 'true' and 'false' are case sensitive. Meaning if written 'True' or 'TRUE' they will show error.
	//When compiled, the value of bool will be shown '1' for 'true and '0' for 'false'.
	
	printf("DATA TYPES:\n\n");
	printf("Integer data type variable A has value %d.\n",a);
	printf("Float data type variable B has value %f.\n",b);
	printf("Double data type variable C has value %lf.\n",c);
	printf("Character data type variable D has value %c.\n",d);
	printf("Boolean data type variable E has value %d.\n",e);
	
	//'\n' indicates print the new line. This can be written either in front of a statement or after.
	//'\n' can be written multiple times as well.
	
	getch();
}
