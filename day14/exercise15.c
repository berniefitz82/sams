#include <stdio.h>

// Write a function that accepts a string and a character. 
// The function should look for the first occurrence of the character in the string and return a pointer to that location.

char * findFirst(char * text, char findMe);

int main(void) {
    char * text = "Bernie";
    char findMe = 'B';    
    char * position = findFirst(text, findMe);
    printf("%c\n", *position);
    return 0;
}

char * findFirst(char * text, char findMe) {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == findMe)
            return &text[i];
        i++;
    }
    puts("Unfortunately the character wasn't found in the test string");
    return 0;
}
