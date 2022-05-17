#include <stdio.h>
//두 정수 입력 후 몫과 나머지를 구함.

int div(int a, int b);//몫
int quo(int j, int k); //나머지

int main() {

	int x, y;
	printf("x 와 y 를 차례대로 입력 받습니다.\n x / y = \n");
	scanf_s("%d %d", &x, &y);

	printf("몫은 %d, 나머지는 %d 입니다.", div(x, y), quo(x, y));

	return 0;
}

int div(int a, int b) {
	return a / b;
}

int quo(int j, int k) {
	return j % k;
}