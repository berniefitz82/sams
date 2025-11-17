#include <stdio.h>

struct time {
    int a, b, c;
};

struct data {
    int a;
    float b,c;
} info;

struct data {
    char single_string[21];
};

typedef struct {
    char *address1, *address2, *city, *state, *zip;
} RECORD;

RECORD myaddress = {
    "1";
    "2";
    "c";
    "s";
    "z";
}

struct data *p_info = &info;

int main(void)
{
    info.a = 100;

    (*p_info).b = 5.5;
    p_info->b = 5.5;

    return 0;
}
