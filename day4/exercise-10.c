#include <stdio.h>

void average(float a, float b, float c, float d, float e);

int main(void)
{
    float a,b,c,d,e;
    puts("Enter 5 floats and I'll tell you the average.");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    average(a,b,c,d,e);
    return 0;
}

void average(float a, float b, float c, float d, float e)
{
    float avg = (a + b + c + d + e) / 5;
    printf("The average of your floats is: %f\n", avg);
}
