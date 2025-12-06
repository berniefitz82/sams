#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int choice;
	printf("Welcome to the system commander\n");
	while (1)
	{
		printf("1. dir\n");
		printf("2. chkdsk\n");
		printf("3. date\n");
		printf("4. ipconfig\n");
		printf("5. Exit Program\n");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				system("dir");
				break;
			case 2:
				system("chkdsk");
				break;
			case 3:
				system("date");
				break;
			case 4:
				system("ipconfig");
				break;
			case 5:
				exit(1);
			default:
				printf("Invalid choice. Try again\n");
		}
	}
	return 0;
}
