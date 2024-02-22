#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    // structs - store groups of data types
    struct Student student1;
    student1.age = 23;
    student1.gpa = 3.3;
    //strcpy = string copy
    strcpy(student1.name, "Henry");
    strcpy(student1.major, "Computer Science");

    printf("%lf\n", student1.gpa);
    printf("%s\n", student1.name);

    struct Student student2;
    student2.age = 27;
    student2.gpa = 3.5;
    //strcpy = string copy
    strcpy(student2.name, "John");
    strcpy(student2.major, "Data Science");

    printf("%lf\n", student2.gpa);
    printf("%s\n", student2.major);


    return 0;
}