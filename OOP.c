#include <stdio.h>
#include <stdlib.h>

//I am aware that C is not Object-Oriented this is just a sort of work-around in order to mimick something similar

typedef void (*Method)(int a); //Defines function pointer "Method"

typedef struct _obj { //Defines structure "Object" having a sub-type "Method"
   int age;
   Method Hi;
}Object;

void Funct(int a){
    printf("hi\n"); //defines the function to be set as a "Method"
}

int main()
{
   Object John;
   John.age=20;
   John.Hi = Funct; //Populates "Object"
   
   John.Hi(1); //Calls "Method"
}
