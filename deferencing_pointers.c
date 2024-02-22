#include <stdio.h>
#include <stdlib.h>

int main(){
    //deferencing pointers - going to that memory address of that pointer and grabbing info or value from it
    int age = 390;
    int *pAge = &age;

    


    // printf("%p\n", pAge);
    // printf("%d\n", *pAge);

    int marks = 45;
    // printf("%p",marks); //to print the address --0x2d-10532
    printf("%d\n", &marks); //&marks: Gets the address of marks
    printf("%d\n", *&marks); //*&marks: Dereferences the address obtained in the previous step, effectively giving you the value of marks
    printf("%d\n", &*&marks); //&*&marks: Takes the address of the value obtained in the second step, which is the original address of marks
    printf("%d\n", *&*&marks); //*&*&marks: The remaining dereferencing and taking the address again cancel out, and it is equivalent to marks
    return 0;
}