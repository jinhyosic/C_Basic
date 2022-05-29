#include<stdio.h>

int add(int num) {
	static int total = 0;
	total += num;

	return total;
}

int main() {

	int x = 1;
	

	while (x != 0) {
		printf("input num : \n");
		scanf_s("%d", &x);
		printf("%d\n", add(x));
	}
}