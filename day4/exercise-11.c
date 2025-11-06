#include <stdio.h>

int power(int a);

int main(void)
{
    int result = power(4);
    printf("3 to the power of 4 is: %d", result);
    return 0;
}

int power(int pow) // pow = 4
{
    if (pow < 1)
        return 1;
    return 3 * power(pow - 1);
}
