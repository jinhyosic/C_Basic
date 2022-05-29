#include<stdio.h>

int main() {

	int n = 0;
	int sum = 1;

	printf("input factorial : \n");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {

		sum *= i;
	}
	printf("%d! = %d\n", n, sum);

	return 0;
}