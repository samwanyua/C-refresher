#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;

    // if(num1 > num2){
    //     result = num1;
    // }
    // else{
    //     result = num2;
    // }

    if(num1 >= num2 && num1 >=num3 ){
        result = num1;
    }
    else if(num2 >= num1 && num2 >=num3){ //both have to be true
        result = num2;
    }
    else{
        result = num3;
    }
    
    return result;
}

int main(){
    // if statement

    // printf("%d", max(332422,342,23));
    if(3 > 2 || 2 > 5){ //only one condition is needed to be true
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}