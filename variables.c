#include <stdio.h>
#include <stdlib.h>

int main (){
    // Variables
    char testGrade = 'A'; //single 8 bit character
    char name[] = "Mike"; //array of characters (string)
    printf("%c\n", testGrade);
    printf("%s\n", name);


    char characterName [] = "George";
    
    int characterAge = 67;

    printf("There is something about C language\n");

    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    printf("He really liked the name %d \n", characterAge);
    printf("but did not like being %d\n", characterAge);


    return 0;
}