#include <stdio.h>
#include <stdlib.h>

int main(){
    // printf -> print different data on the screen
    printf("Hello World\n"); //is a function
    printf("Hello \"Mark\"");

    // Format specifier
    // %d => int, %s => string, %c => character %f => float

    printf("My favourite number is %d\n", 345342);
    printf("My favourite number is %f\n", 345342.748913729);

    printf("My favourite brand is %s\n", "Apple");

    printf("My grade is %c.\n", 'A');

    return 0;
}