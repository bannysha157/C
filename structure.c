Structure in c is a user-defined data type that enables us to store the collection of different data types. Each element of a structure is called a member.

The ,struct keyword is used to define the structure. Let's see the syntax to define the structure in c.

struct structure_name
{
    data_type member1;
    data_type member2;
    .
    .
    data_type memeberN;
};




Declaring structure variable

We can declare a variable for the structure so that we can access the member of the structure easily. There are two ways to declare structure variable:

By struct keyword within main() function
By declaring a variable at the time of defining the structure.

1st way:

Let's see the example to declare the structure variable by struct keyword. It should be declared within the main function.

struct employee
{   int id;
    char name[50];
    float salary;
};




The variables e1 and e2 can be used to access the values stored in the structure. Here, e1 and e2 can be treated in the same way as the objects in C++ and Java.

2nd way:

Let's see another way to declare variable at the time of defining the structure.

struct employee
{   int id;
    char name[50];
    float salary;
}e1,e2;

















#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 variable for structure    
int main( )    
{    
   //store first employee information    
   e1.id=101;    
   strcpy(e1.name, "arveni");//copying string into char array    
   //printing first employee information    
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
return 0;  
}    
Output:

employee 1 id : 101
employee 1 name : arveni






