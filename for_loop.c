#include <stdio.h> //This line includes the standard input/output header file, which contains functions like printf and scanf for input and output operations.
#include <stdlib.h> //This line includes the standard library header file, which provides functions involving memory allocation, random numbers, and other utility functions.

int main(){ /*This is the main function of the program, where the execution of the program begins. It returns an integer value (int) to the operating system, typically indicating the success or failure of the program.*/

    int i = 1;

    while(i <=5){
        printf("%d\n", i);
        i++;
    }

    int index;
    for(index = 1; index <= 8; index++){
        printf("%d\n", index);
    }

    int luckNumbers[] = {23,24,34,45,56,67,78,89,76};

    int k;
    for(k = 0; k < 9; k++){ //9 is the length of array ie the items no.
        printf("%d\n", luckNumbers[k]);
    }
    return 0; /*This is the main function of the program, where the execution of the program begins. It returns an integer value (int) to the operating system, typically indicating the success or failure of the program.*/
}