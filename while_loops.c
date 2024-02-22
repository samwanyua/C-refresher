#include <stdio.h>
#include <stdlib.h>

int main(){

    // While loops - continually loop over a code until a condition is false
    int index = 1;
    //infinite loop is where the condition never become false
    while(index <=5){
        printf("%d\n", index);
        index ++;
    }

    // Do while loop - execute the code first then checks the condition
    int i = 27;
    do {
        printf("%d\n", i);
        i ++;
    }while(i <=5);



    return 0;
}