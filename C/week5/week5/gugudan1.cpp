#include<stdio.h>
//while문 활용 구구단
int main() {

	int num = 1;
	int dan;

	printf("intput num\n");
	scanf_s("%d", &dan);

	while (num < 10) {
		printf("%d X %d = % d\n", dan, num, dan * num);
		num++;
	}
	

	return 0;
}