#include <stdio.h>
#include <stdlib.h>

unsigned long djb_hash(unsigned char *str) {
	unsigned long hash = 5381;
	int c;

    while (c = *str++) {
		hash = hash * 33 + c;
	}

	return hash;
}


int main(void) {
	char *string;

	printf("String here:");
	scanf("%s", string);

	printf("The djb hash of this string is: %d\n", djb_hash(string));
}