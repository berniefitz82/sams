#include <stdio.h>

int main(void)
{
	double first, second;
	char op;
	int repeat = 1;
	printf("CALC 1.0.0\n");
	printf("Enter an equation with a space between the numbers and the operation.\n");
	printf("e.g. 564 \\ 2\n");
	
	do
	{
		scanf("%le %c %le", &first, &op, &second);
		switch (op)
		{
		case '+':
			printf("Answer: %f", first + second);
			repeat = 0;
			break;
		case '-':
			printf("Answer: %f", first - second);
			repeat = 0;
			break;
		case '*':
			printf("Answer: %f", first * second);
			repeat = 0;
			break;
		case '\\':
			printf("Answer: %f", first / second);
			repeat = 0;
			break;
		default:
			printf("Incorrect format. Try again\n");
		}
	} while (repeat);

	return 0;
}
