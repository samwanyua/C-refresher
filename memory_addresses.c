#include <stdio.h>
#include <stdlib.h>

int main(){

    //memory addresses
    int age = 30;
    double gpa = 3.4;
    char grade = 'C';

    printf("Age: %p\nGPA: %p\nGrade: %p",&age, &gpa, &grade); //%p is a pointer


    return 0;
}