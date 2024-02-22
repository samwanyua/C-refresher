#include <stdio.h>
#include <stdlib.h>

// In C, functions need to be declared before they are used 
void sayHi();

int main(){ //main fucntion/method
    //function

    printf("Top\n");
    sayHi("Sam",40); // Call the sayHi function
    sayHi("Judikeys",23); // Call the sayHi function
    printf("Bottom");
    return 0;
}


// void - return no information
// Function definition
void sayHi (char name[], int age){ //name and age parameters 
    printf("Hello %s, you are %d years old!\n",name,age);
}