#include <stdio.h>
//곱하기 프로그램
int prod(int a, int b);
int main() {

	int x, y;

	while (1) {

		printf("두개의 정수를 입력하세요:\n(0 0 입력시 종료.)\n");
		scanf_s("%d %d", &x, &y);

		printf("%d\n", prod(x, y));

		if (x == 0 && y == 0) {
			break;
		}
	
	}
	return 0;
}

int prod(int a, int b) {
	return a * b;
}