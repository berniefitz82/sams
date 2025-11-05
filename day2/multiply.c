#include <stdio.h>

int a,b,c;

int product(int x, int y);

int main(void)
{
    /* Get the first number */
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    /* Get the second number */
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &b);

    /* Calculate and display the product */
    c = product(a, b);
    printf("%d times %d = %d\n", a,b,c);

    return 0;
}

/* Function returns the product of the two values provided */
int product(int x, int y)
{
    return (x*y);
}
