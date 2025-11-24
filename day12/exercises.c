#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, choice;
    choice = 2;
    for (i = 0; i < 10; i++)
    {
        if (i== 2) continue;
        printf("The value of i: %d\n", i);

        if (i==5) break;
    }

    system("dir");

    if (choice == 1)
        printf("You answered 1");
    else if (choice == 2)
        printf("You answered 2");
    else printf("You did not choose 1 or 2");

    do {
        printf("Hello");
    } while (1);
    return 0;
}