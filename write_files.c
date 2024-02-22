#include <stdio.h>
#include <stdlib.h>

int main(){
    // creating a pointer to a physical file
    // fpointer - stores/points the memory address of 'employees.txt' file
    // FILE * fpointer = fopen("/home/wanyua/Programming/C/C-refresher/employees.txt", "w"); /*file modes r=read w=write a=append */
    FILE * fpointer = fopen("/home/wanyua/Programming/C/C-refresher/employees.txt", "a"); //append
    fprintf(fpointer, "\nNewly appended text");

    fclose(fpointer);
    return 0;
}