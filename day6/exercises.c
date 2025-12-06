#include <stdio.h>
#include <limits.h>

char a, c;
unsigned int b;
int d;
int numbers[6];
int numbers2[10];
int array_pos;
float float1, float2;
int sum;
int lowest;
int highest;

void print_values();

int main(void)
{
//	printf("This will end with a new line.\n");
//	puts("This will end with a new line.");
//	scanf("%c %u %c", &a, &b, &c);

//	printf("Enter an integer value: ");
//	scanf("%d", &d);
//	printf("The value you entered was %d", d);
	
	//d = -1;
	//while (d % 2 != 0) 
	//{
	//	printf("Enter an integer value: ");
	//	scanf("%d", &d);
	//}
	//printf("The value you entered was %d", d);

	//d = -1;
	//array_pos = 0;
	//while (d != 99 && array_pos < 6)
	//{
	//	printf("Enter a number: ");
	//	scanf("%d", &d);
	//	if (d % 2 == 0)
	//	{
	//		numbers[array_pos] = d;
	//		array_pos++;
	//	}
	//}
	//print_values(array_pos);

	// Exercise 10
//	printf("Enter two floating point numbers: ");
//	scanf("%f%f", &float1, &float2);
//	printf("The product of the two floating point numbers %f and %f is: %f", float1, float2, float1 * float2);

	// Exercise 11
//	puts("Enter 10 integers: ");
//	for (d = 0; d < 10; d++)
//	{
//		scanf("%d", &numbers2[d]);
//	}
//	sum = 0;
//	for (d = 0; d < 10; d++)
//	{
//		sum += numbers2[d];
//	}
//	printf("The sum of your ten numbers is: %d", sum);

	puts("Enter integers until the array is full or until you enter 0: ");
	for (d = 0; d < 6; d++) {
		scanf("%d", &numbers[d]);
		if (numbers[d] == 0) 
		{
			break;
		}
	}

	highest = INT_MIN;
	lowest = INT_MAX;

	for (d-=1; d >= 0; d--)
	{
		if (numbers[d] > highest)
		{
			highest = numbers[d];
		}
		if (numbers[d] < lowest)
		{
			lowest = numbers[d];
		}
	}
	printf("Highest: %d\nLowest: %d\n", highest, lowest);

}

void print_values() 
{
	int i;
	for (i = 0; i < array_pos; i++)
	{
		printf("%d\t", numbers[i]);
	}
}

// Exercise 9
void print_report( void )
{
	printf("\nSAMPLE REPORT");
	printf("\n\nSequence\tMeaning");
	printf("\n========\t=======");
	printf("\n\\a\t\tbell (alert)");
	printf("\n\\b\t\tbackspace");
	printf("\n\\n\t\tnewline");
	printf("\n\\t\t\thorizontal tab");
	printf("\n\\\\t\tbackslash");
	printf("\n\\?\t\tquestion mark");
	printf("\n\\'\t\tsingle quotation");
}

// Exercise 7 - Bug Buster. The double quotes need to be escaped
// Exercise 8 - Bug Buster. There is no address pointer & for the anser variable.
