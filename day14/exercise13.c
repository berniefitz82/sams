#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char * concatenate_strings(int num, char * text,...);
char concat_string[1000] = "";
int main(void) {
    char * one = "Bernie ";
    char * two = "Kerrie ";
    char * three = "Phoebe ";
    char * four = "Zachary ";
    char * result = concatenate_strings(4, one, two, three, four);
    printf("%s\n", result);
    return 0;
}

char * concatenate_strings(int num, char * text,...) {
    int i;
    va_list arg_ptr;
    va_start(arg_ptr, text);
    strcat(concat_string, text);
    for (i=0 ; i<num-1;i++) {
        strcat(concat_string, va_arg(arg_ptr, char *));
    }
    return concat_string;
}
