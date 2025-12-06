#include <stdio.h>

int main(void) {
	int ascii_counter[256];
	int i;
	int next;
	
	for (i =0; i <256; i++)
		ascii_counter[i] = 0;

	while ((next = getchar()) != EOF) {
		ascii_counter[next]++;
	}

	for (i = 0; i < 256; i++) {
		if (ascii_counter[i] != 0 && i > 64 && i < 123) {
			printf("%c: %d times\n", i, ascii_counter[i]);
		}
	}
}

