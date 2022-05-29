#include<stdio.h>

int main() {

		int x = 1;
		int y = 1;
		int r = 0;

		while (x != 0 || y != 0) {

			printf("input num(0 input quit)\n");
			scanf_s("%d %d", &x, &y);

			r = (x > y ? x - y : y - x);

				printf("%d\n", r);
		
		}

	return 0;
}