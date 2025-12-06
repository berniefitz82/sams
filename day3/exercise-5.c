#include <stdio.h>

int x,y;

int main(void)
{
    x = 10;
    y = 500;
    x = (x >= 1 && x <= 20) ? y : x; 
    printf("The value of x is: %d\n", x);
    return 0;
}
