#include<stdio.h>

int main() {

	int x = 1;
	int y = 1;
	int r = 0;


	while (x != 0 || y != 0) {

		printf("input num(0 input quit)\n");
		scanf_s("%d %d", &x, &y);

		if (x > y) {
			r = x - y;
			printf("%d\n", r);
		
		}
		else if (x < y) {
			r = y - x;
			printf("%d\n", r);
		
		}
		else
			printf("x");
	

	}
	return 0;
}