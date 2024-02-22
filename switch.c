#include <stdio.h>
#include <stdlib.h>

int main(){

    // switch statements - help us compare one value to many conditions
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did alright!");
            break;
        case 'C':
            printf("You did poorly!");
            break;
        case 'D':
            printf("You did very bad!");
            break;
        case 'E':
            printf("You failed!");
            break;
        default: //it's like else in if else statements
            printf("Invalid grade");
        
        
    }



    return 0;
}