#include<stdio.h>

int main() {

	int sum = 0;
	int x = 0;
	do {
		if (x % 2 == 0) {
			sum += x;
		}
		x++;
	} while (x <= 100);

	printf("sum 1~100 = %d \n",sum);
	return 0;
}