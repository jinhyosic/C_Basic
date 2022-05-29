#include<stdio.h>

int main() {

	int x, y = 0;
	printf("input num 2: \n");
	scanf_s("%d %d", &x, &y);

	for (int i = 2; i < x && i < y; i++) {

		if (x % i == 0 && y % i == 0) {

			printf("최대공약수 : %d\n", i);
		}
	}

	return 0;
}