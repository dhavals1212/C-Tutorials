#include<stdio.h>
#include<string.h>//For string operations string.h library has to be included.

void main()
{
	char s1[20];
	char s2[20];
	//We defined two character arrays that can take at max 20 elements inside.
	
	gets(s1);
	gets(s2);
	//The function 'gets(string)' gets the string value from user.
	//'gets(s1)' will get first string value from user and gets(s2) second value, making them both the strings.
	
	printf("The Length of the String1 is %d\n", strlen(s1));
	//'strlen' is the function to find the total length of elements in a string.
	//'strlen' when called will always be a number, hence the use of '%d'.
	//Syntax: 'strlen(string_name)'.
	
	printf("The Length of the String2 is %d\n", strlen(s2));
	printf("Concatenation of the two strings, String 1 and String 2 will be: %s\n", strcat(s1,s2));
	//Concatenation is process of adding the value of one thing to another.
	//In string concatenation, the values of one string will be added to the values of other string.
	//Its function is 'strcat'.
	//Syntax: 'strcat(string1, string2)' which will add the string2 values to string1 and store inside String1.
	
	printf("String 1 in Lower case will be: %s\n", strlwr(s1));
	//To write the string values in lower case we write 'strlwr'.
	//It will store the string in lower case.
	
	printf("String 2 in Lower case will be: %s\n", strlwr(s2));
	printf("String 1 in Upper case will be: %s\n", strupr(s1));
	//To write the string values in upper case we write 'strupr'.
	//It will store the string in upper case.
	
	printf("String 2 in Upper case will be: %s\n", strupr(s2));
	printf("Copy of String 2 into String 1 will be: %s", strcpy(s1,s2));
	//Copy of Strings will print the whole of one string and store into another one.
	//Syntax: 'strcpy(string1, string2)' will copy the string2 into string1 and store inside string1.
	
	getch();
}
