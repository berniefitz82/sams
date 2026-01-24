#include <stdio.h>
#include <limits.h>

// Write a function that takes an array of numbers and finds the lowest and highest values
// and returns pointers to these
// hint: you'll need to know how many elements are in the array

struct hilo
{
    int *high;
    int *low;
};

struct hilo findHighAndLow(int num, int nums[]);

int num = 5;
int nums[] = {-11, 2, 3, 4, 5};

int main(void)
{
    struct hilo result;
    result = findHighAndLow(num, nums);
    printf("High: %d\nLow: %d\n", *result.high, *result.low);
    return 0;
}

struct hilo findHighAndLow(int num, int nums[])
{
    int i, lowpos = -1, highpos = -1, lowval = INT_MAX, highval = INT_MIN;
    for (i = 0; i < num; i++)
    {
        if (nums[i] < lowval)
        {
            lowval = nums[i];
            lowpos = i;
        }
        if (nums[i] > highval)
        {
            highval = nums[i];
            highpos = i;
        }
    }

    struct hilo test;
    test.high = &nums[highpos];
    test.low = &nums[lowpos];
    return test;
}
