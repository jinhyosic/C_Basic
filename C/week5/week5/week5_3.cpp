#include<stdio.h>

int main() {
	
	int x;
	int sum = 0;
	
	do {

		printf("input num(exit = 0)\n");
		scanf_s("%d", &x);
		sum += x;
		printf("���� ������ %d\n", sum);

	} while (x != 0);

	printf("���� ������ : %d\n", sum);

	return 0;
}