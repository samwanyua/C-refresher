#include <stdio.h>
#include <stdlib.h>

int main(){
    //2D arrays & nested loops]
    //2D arrays - arrays where the elements of an arrays are arrays

    int nums[3][2] = {
        {1,2},
        {3,4},
        {5,6},
    };

    printf("%d\n", nums[1][1]); //accessing the elements

    int i,j;

    for(i = 0; i < 3; i++){ //3 is the number of elements
        for(j =0; j < 2; j++){ //elements inside each array
            printf("%d,",nums[i][j]);
        }
        printf("\n");
    }


    return 0;
}