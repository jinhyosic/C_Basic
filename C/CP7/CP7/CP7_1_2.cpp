#include<stdio.h>

int main() {

	int x = 0;
	int i = 1;
	printf("input num : \n");
	scanf_s("%d", &x);

		while (i <= x) {

			printf("%d\n", i * 3);
			i++;

		}
}