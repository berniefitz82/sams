#include <stdio.h>

char *char_ptr;
int cost, *p_cost;
float radius, *p_radius;
int data[10];

int sumarrays(int array1[], int array1_size, int array2[], int array2_size);
void addarrays(int array1[], int array2[], int size);

int main(void)
{
    int i, sum;
    p_cost = &cost;
    cost = 100;
    *p_cost = 100;

    printf("Value of ptr: %p\nValue of ptr target:%d\n", p_cost, *p_cost);

    radius = 5.0;
    p_radius = &radius;

    data[2] = 100;
    *(data + 2) = 100;
    
    for (i = 0; i < 10; i++)
        data[i] = 1;

    sum = sumarrays(data, 10, data, 10);
    printf("The sum is: %d\n", sum);

    addarrays(data, data, 10);
    return 0;
}

/* 
 * This function takes two arrays and returns the sum of both arrays.
 * */
int sumarrays(int array1[], int array1_size, int array2[], int array2_size) 
{
    int i, sum;
    sum = 0;
    for (i = 0; i < array1_size; i++)
        sum += array1[i];
    for (i = 0; i < array2_size; i++)
        sum += array2[i];
    return sum;
}

void addarrays(int array1[], int array2[], int size)
{
    int array3[size];
    int i;

    for (i = 0; i < size; i++)
    {
        array3[i] = array1[i] + array2[i];        
    }

    for (i = 0; i < size; i++)
    {
        printf("Array[%d]: %d\n", i, array3[i]);
    }
}
