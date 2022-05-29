#include<stdio.h>

int main() {
	
	int x;
	int sum = 0;
	
	do {

		printf("input num(exit = 0)\n");
		scanf_s("%d", &x);
		sum += x;
		printf("현재 누적합 %d\n", sum);

	} while (x != 0);

	printf("최종 누적합 : %d\n", sum);

	return 0;
}