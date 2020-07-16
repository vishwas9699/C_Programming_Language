#include <stdio.h>
#include <string.h>
union employee
{   int id;
    char name[50];
}e1;  //declaring e1 variable for union
int main( )
{
    //store first employee information
    e1.id=101;
    strcpy(e1.name, "Aman");//copying string into char array
    //printing first employee information
    printf( "employee 1 id : %d\n", e1.id);
    printf( "employee 1 name : %s\n", e1.name);
    return 0;
}

//employee 1 id : 8328732736211
//employee 1 name : Aman
