#include <stdio.h>

int main () {

	int i; int summe = 0;

	for (i = 1; i < 1000; i++) {

		if (i % 3 == 0 || i % 5 == 0) {

			summe += i;
		}

	}

	printf("Die Summe ist %d\n", summe);

	return 0;

}	
