#include<stdio.h>
#include<string.h>

struct Person
//We define a structure as 'struct'. We write 'Person' as the entity of that structure.

{
	int id;
	char name[20];
	
	int salary;
};
//After the Structure is built we have to end it with ';' as it is considered a command.
//Hence, our structure is a command to store the different datasets of different stuff.

void main()
{
	struct Person p1;
	//We call the struct element with Person entity and give the argument variable p1.
	//Now that the p1 is defined each argument can occur with the p1.
	
	p1.id=1;
	//We previously had defined the id of the person, now we assign that id to the person as p1.id.
	
	strcpy(p1.name, "Sam Winchester");
	//As seen above p1.name variable will be saving the name that we defined through the strcpy command.
	
	p1.salary=8000;
	
	printf("Identification Number of the employee is: %d.\n", p1.id);
	//p1.id variable was called.
	
	printf("Name of the employee is %s.\n", p1.name);
	printf("Salary of the employee is %d.\n", p1.salary);

	getch();
}
