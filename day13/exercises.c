#include <stdio.h>

int main(void) {
	char buffer[31];
	scanf("%30[^*]s", buffer);
	printf("%s", buffer);
	printf("Hello World");
	fprintf(stdout, "Hello World");
	puts("Hello World");
	fprintf(stderr, "Hello Standard Error\n");
	printf("Jack asked, \"What is a backslash?\"\nJill said, \"It is '\\'\"");
	return 0;
}
