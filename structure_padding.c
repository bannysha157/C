//Using #pragma pack(1) directive
//Using attribute
//Using #pragma pack(1) directive

#include <stdio.h>
#pragma pack(1)  
struct base
{
    int a;
    char b;
    double c;
};
int main()
{
  struct base var; // variable declaration of type base  
  // Displaying the size of the structure base  
  printf("The size of the var is : %d", sizeof(var));
return 0;
}

//using attribute

#include <stdio.h>

struct base
{
    int a;
    char b;
    double c;
}__attribute__((packed));  ;
int main()
{
  struct base var; // variable declaration of type base
  // Displaying the size of the structure base
  printf("The size of the var is : %d", sizeof(var));

    return 0;
}


