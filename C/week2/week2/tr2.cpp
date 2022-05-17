#include <stdio.h>
//두 정수를 곱해주고 더해주는 함수 정의
int MultiAdd(int a, int b, int c);

int main() {

	int x, y, z;

	while (1) {

		printf("3개의 정수 입력:\n");
		scanf_s("%d %d %d", &x, &y, &z);

		printf("%d\n", MultiAdd(x, y, z));

		if (x == 0 && y == 0 && z == 0)
		break;
	}

	return 0;
}

int MultiAdd(int a, int b, int c) {

	return (a * b) + c;

}