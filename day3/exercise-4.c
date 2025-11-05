#include <stdio.h>

int x,y;

int main(void)
{
    x = 30;
    y = 500;
    if (x >= 1 && x <= 20)
        x = y;
    printf("The value of x is: %d\n", x);
    return 0;
}
