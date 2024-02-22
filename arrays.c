#include <stdio.h>
#include <stdlib.h>

int main(){
    // Arrays - container that stores any number of  value
    // variable - container that stores a single value

    int luckyNumbers[] = {4,5,8,23,43,45,24,34,243}; //int array

    luckyNumbers[2] = 322; //you can modify the array
    printf("%d\n",luckyNumbers[2]);

    int marks[30];//30 is the capacity
    marks[0]= 80;
    printf("%d", marks[0]); //0 is index

    char classList[59] = "Students"; //THis is an array too



    return 0;
}