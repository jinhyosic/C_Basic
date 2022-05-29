#include<stdio.h>

int main() {

		int x = 0;
		int k = 0;

		printf("input num");
		scanf_s("%d", &x);

		while (k < x) {
			printf("hello world %d\n", k+1);
				k++;
		}

	return 0;
}