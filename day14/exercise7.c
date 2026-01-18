#include <stdio.h>
#include <stdlib.h> // need this for malloc

/*
    Use pointers to type double variables to accept 10 numbers from the user, sort them, and print them to the screen.
*/


// READ page 366-367 for help
double *my_array[10];
void sort(double *p[], int n);
void print_doubles(double *p[], int n);

int main(void) {
    int i = 0;

    puts("Enter ten doubles and hit enter to store: ");
    for (i=0; i<10; i++) {
        if ((my_array[i] = (double *)malloc(sizeof(double))) == NULL) {
            puts("Memory allocation error");
            return -1;
        }
        scanf("%lf", my_array[i]);
    }   

    print_doubles(my_array, 10);
    sort(my_array, 10); 
    print_doubles(my_array, 10);
    return 0;
}

void sort(double *p[], int n) {
    int a,b;
    double *x;

    for (a=1; a<n; a++) {
        for (b=0; b< n-1; b++) {
            if (*p[b] > *p[b+1]) { // if we need to swap
                x = p[b];
                p[b] = p[b+1];
                p[b+1] = x;
            }
        }
    }
}

void print_doubles(double *p[], int n) {
    int i;
    puts("*** Printing Doubles ***");
    for (i=0; i<n; i++) {
        printf("%lf\n", *p[i]);
    }
}
