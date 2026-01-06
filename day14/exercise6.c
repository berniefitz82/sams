/*
    Write a program that declares a 12x12 array of characters.
    Place an X in every other element.
    Use a pointer to the array to print the values to the screen in a grid format.
*/

#include <stdio.h>

char my_array[12][12];


int main(void) {
    int i,j = 0;
    
    for (i =0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (j % 2 == 0) {
                my_array[i][j] = 'X';
            }
        }
    }

    char (*ptr)[12] = my_array;
    for (i =0; i < 12; i++) {
        puts("");
        for (j = 0; j < 12; j++) {
            if (j % 2 == 0) {
                printf("%c ", ptr[i][j]);
            }
        }
    } 
    return 0;
}