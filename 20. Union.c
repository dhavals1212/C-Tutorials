#include <stdio.h>
#include <string.h>
 
union Data
//We defined the union here, and the Data that will store the data types and values.

{
   int i;
   float f;
   char str[20];
};
//Just like structure we have to store it with ';'.
 
int main()
{
   union Data data;
   //Here we create the variable data, but we do not have to assign it.

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}
