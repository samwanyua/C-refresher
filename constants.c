#include <stdio.h>
#include <stdlib.h>

int main(){

    // Constants -> they cannot be modified
    int num = 5;
    printf("%d\n", num);

    num = 23;
    printf("%d\n", num);

    // making num a constant
    const int NUM = 34;
    
    printf("%d\n",NUM);

    // Strings are also considered a constant
    printf("Hello\n"); //this cannot be changed

    printf("%d\n",34); //34 will not change so it's a constant
    return 0;
}