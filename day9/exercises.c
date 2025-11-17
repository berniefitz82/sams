#include <stdio.h>

void copy_array(char array1[], char array2[]);
char* find_longer(char *string1, char *string2);
int main(void) 
{
    char letter = '$';
    char ex2[18] = "Pointers are fun!";
    char my_string[80];
    puts(ex2);
    puts("Enter a string of less than 80 characters");
    fgets(my_string, 80, stdin);
    printf("my_string: %s", my_string);
    return 0;
}

void copy_array(char array1[], char array2[]) 
{
    int i;
    for (i = 0; i < 10; i++)
        array2[i] = array1[i];
}

    


