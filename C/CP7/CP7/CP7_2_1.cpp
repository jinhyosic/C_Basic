#include<stdio.h>

int main() {

	int x = 0;
	int sum = 0;
	int num = 1;
	while (x < 5) {
		if (num > 0) {
			printf("input num : \n");
			scanf_s("%d", &num);
			sum += num;
			x++;

		}
		else {
			printf("input num > 0\n");


		}
	}
			printf("sum : %d\n", sum);

	return 0;
}