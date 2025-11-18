#include <stdio.h>

int var = 6;

void print_value(void);

int main(void)
{
    print_value();
    return 0;
}

void print_value(void)
{
    printf("%d\n", var);
}

