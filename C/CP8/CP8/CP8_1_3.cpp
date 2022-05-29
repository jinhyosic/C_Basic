#include<stdio.h>

int main() {

	int x = 0;
	int y = 0;
	int z = 0;
	int sum = 0;

	while (x != -1) {
		printf("input score : \n");
		scanf_s("%d %d %d", &x, &y,&z);

		sum = x + y + z;

		if ((float)sum / 3 >= 90) {
			printf("score = A\n");
			
		}
		else if ((float)sum / 3 >= 80) {
			printf("score = B\n");
		}
		else if ((float)sum / 3 >= 70) {
			printf("score = C\n");
		}
		else if ((float)sum / 3 >= 50) {
			printf("score = D\n");
		}
		else
			printf("F\n");
	}

	return 0;
}