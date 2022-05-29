#include<stdio.h>

int main() {

	int x;
	int y = 9;

		printf("input num\n");
		scanf_s("%d", &x);

		while (y > 0) {
			printf("%dX%d=%d\n", x, y, x * y);
			y--;
		}

	return 0;
}