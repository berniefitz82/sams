#include <stdio.h>
#include <stdarg.h>

void ex6(char* my_arg[]);
char (*p)(char * my_arg[]);
float (*func)(int arg);
int (*func[])(char* my_string); // This function could take a menu option and then execute that function
char * my_var[10];

int ex8_func(char * my_var);
void numbers(int *nt1, int *int2, int *int3);

struct linked_list_item {
    char * name;
    char * address;
    struct linked_list_item * next;
};

int main(void) {
    int one, two, three = 0;
    numbers(&one, &two, &three);
    float my_float;
    float *my_float_ptr = &my_float;
    float **my_float_ptr_ptr = &my_float_ptr;
    **my_float_ptr_ptr = 100;
    printf("%f\n", my_float);

    int x[3][12];
    int (*ptr)[12];
    ptr = x;


    int array[2][3][4];
    // This would look like { { {} {} {} {} } { {} {} {} {}} {{} {} {} {}} }, 
    int test_array[2][3][4] = {{{1,2,3,4}, {1,2,3,4}, {1,2,3,4} }, { {1,2,3,4}, {1,2,3,4}, {1,2,3,4} }};
    printf("%d\n", test_array[1][1][1]);
    return 0;
}