#include <stdio.h>
int main() {
	
	int x;
	const int K = 3;
	printf("input num : \n");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {

		printf("%d X %d = %d\n", K, i, K * i);

	}
	return 0;
}