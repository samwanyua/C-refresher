#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num){
    // double result = num * num * num;
    // double result = pow(num, 3);
    // return result;
    return num * num * num; //break us out of the function
}

int main(){
    // Return statement

    printf("Answer: %f", cube(23.9));

    return 0;
}

