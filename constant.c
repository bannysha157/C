//Creating constants in C//
//In a c programming language, constants can be created using two concepts...//

1)Using the 'const' keyword
2)Using '#define' preprocessor

example:
Using the 'const' keyword:
We create a constant of any datatype using 'const' keyword.

//syntax:const datatype constantName ;//

program:example1
#include<stdio.h>
#include<conio.h>
void main()
{
   int i = 9 ;
   const int x = 10 ;     
   i = 15 ;
   x = 100 ; // creates an error
   printf("i = %d\nx = %d", i, x ) ;
}
o/p=The above program gives an error because we are trying to change the constant variable value (x = 100).

2)using #define preprocessor:
////The #define preprocessor directive is used to define constant or micro substitution. It can use any basic data type./////

program
#include <stdio.h>  
#define PI 3.14  
main() {  
   printf("%f",PI);  
}
output:3.14000
