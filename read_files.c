#include <stdio.h>
#include <stdlib.h>

int main(){

    char line[255];

    FILE *fpointer = fopen("/home/wanyua/Programming/C/C-refresher/employees.txt", "r");

    fgets(&line, 255, fpointer); //255 is size
    fgets(&line, 255, fpointer);
    printf("%s",line);

    fclose(fpointer);

    return 0;
}