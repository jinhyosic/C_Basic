#include<stdio.h>

int main() {

	int n = 0;
	printf("input num\n");
	scanf_s("%d");
	switch (n / 10) {
	case 0:
		printf("0점이상 10점 미만");
		break;
	case 1:
		printf("10점이상 20점 미만");
		break;
	case 2:
		printf("20점이상 30점 미만");
		break;
	default:
		printf("30점 이상");
	}
	return 0;
}