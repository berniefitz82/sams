#include <stdio.h>

long long_array[50]; // exercise-1

int main(void) 
{
    long_array[49] = 123.456; // exercise-2

    // exercise-3 What is the value of x when the following statement is complete?
    // for (x = 0; x < 100; x++)
    // Answer: 100

    // exercise-4 What is the value of ctr when the following statement is complete?
    // for (ctr = 2; ctr < 10; ctr += 3)
    // Answer: 11

    // exercise-5 How many X's does the following print?
    // for (x = 0; x < 10; x++) // executes 10 times
    //  for (y = 5; y > 0; y--) // executes 5 times for every loop above
    //      puts("X");
    // Answer: 10 * 5 = 50

    // exercise-6 Write a for statement to count from 1 to 100 by 3s.
    // for (x = 1; x <= 100; x +=3)

    // exercise-7 Write a while statement to count from 1 to 100 by 3s.
    // count = 1;
    // while (count <= 100)
    //  count += 3;

    // exercise-8 Write a do..while statement to count from 1 to 100 by 3s.
    // count = 1;
    // do {
    //  count += 3;
    // } while (count <= 100);

    // exercise-9 BUG BUSTER
    // record is never incremented, endless loop

    // exercise-10 BUG BUSTER
    // There is a semi-colon after the for loop before the statement block
    return 0;
}


