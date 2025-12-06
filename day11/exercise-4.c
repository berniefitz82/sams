#include <stdio.h>


void print_value(int var);

int main(void)
{
    int var = 6;
    print_value(var);
    return 0;
}

void print_value(int var)
{
    printf("%d\n", var);
}

