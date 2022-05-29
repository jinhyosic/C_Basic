#include<stdio.h>

int main() {
	
	int x = 0;

	for (x = 1; x < 100; x++) {

		if (x % 7 == 0 || x % 9 == 0) {

			printf("%d\n", x);
		}
		
	}

	return 0;
}