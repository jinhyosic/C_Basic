#include<stdio.h>

int main() {

	int x = 0;
	int sum = 0;
	do {

		printf("intput num\n");
		scanf_s("%d", &x);

		sum += x;

		printf("���ݱ��� sum : %d\n", sum);

	} while (x != 0);

	printf("sum : %d\n", sum);

	return 0;
}