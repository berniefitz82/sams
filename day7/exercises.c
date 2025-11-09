#include <stdio.h>
#include <stdlib.h>

int one[1000], two[1000], three[1000];
int four[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int eightyeight[88];
int stuff[12][10];
int twod[5][4];

int main(void)
{
    int i, j;
    
    for (i = 0; i < 88; i++)
        eightyeight[i] = 88;

    for (i = 0; i < 12; i++)
        for (j = 0; j < 10; j++)
            stuff[i][j] = 0;
    
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
        {
            twod[i][j] = rand();
            printf("%d\n", twod[i][j]);
        }

    return 0; 
}

// 5. Bug Buster - the loops are using the wrong 
// index. You should swap the x and y otherwise 
// you are reading outside the array
//
// 6. Bug Buster - Array indexes start from 0.
// This code is trying to access element 11 
// which doesnt exist
//
