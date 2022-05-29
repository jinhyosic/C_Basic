#include<stdio.h>

int main() {

	int x, y = 0;
	printf("input num : \n");
	scanf_s("%d %d", &x, &y);
	if (x < y) {
		for (; x <= y; x++) {

			for (int i = 1; i < 10; i++) {
				printf("%d x %d = %d", x, i, x * i);
			}
		}
	}
	else if(x > y) {
		
		for (; y <= x; y++) {

			for (int i = 1; i < 10; i++) {
				printf("%d x %d = %d", y, i, y * i);
			}
		}

	}
	
	return 0;
}
