#include<stdio.h>
//정수를 입력받아 역순으로 구구단 출력
int main() {

	int x;

	printf("num input\n");
	scanf_s("%d", &x);
	

		for (int i = 9; i > 0 ; i--) {

			printf("%d X %d = %d\n", x, i, x * i);

		}

	return 0;
}