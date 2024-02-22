#include <stdio.h>
#include <stdlib.h>

int main(){
    // Getting user input
    int age;
    double gpa;
    char grade;
    char name [20];
    
    printf("Enter in your name: ");
    // scanf("%s", name); //& is not needed
    fgets(name, 20,stdin); // For getting multiple words 


    printf("Enter in your gpa: ");
    scanf("%lf", &gpa); //& is a pointer


    printf("Enter in your age: ");
    scanf(" %d", &age); //& is a pointer

    printf("Enter in your grade: ");
    scanf(" %c", &grade);

    printf("You name is %s \n", name);
    printf("You are %d years old\n", age);
    printf("Your GPA is  %f\n", gpa);
    printf("Your Grade is  %c\n", grade);
    

    return 0;
}