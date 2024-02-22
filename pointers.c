#include <stdio.h>
#include <stdlib.h>

int main(){

    //pointer is a memory address(physical address inside the memory in a computer where a value is stored)

    int age = 30;
    int * pAge = &age;


    double gpa = 3.2;
    double *pGpa = &gpa;
    
    char grade = 'A';
    char * pGrade = &grade;




    printf("%p",&age); //& gives a physical address in memory

    return 0;
}