#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Random() {
	void srand(unsigned int seed);
}

int main() {

		for (int i = 0; i < 5; i++) {

			printf("%d\n", (rand() % 100) + 1);
				
		}

	return 0;
}