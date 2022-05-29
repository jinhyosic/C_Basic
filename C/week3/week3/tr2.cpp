#include<stdio.h>
//비트연산자 이해 좌측(<<)으로 1칸 이동마다 결과 값, 2곱
//비트연산자 이해 우측(>>)으로 1칸 이동마다 결과 값, 2제
int main() {

	int num = 3;

	int b1 = num << 3;

	int b2 = b1 >> 2;

	printf("%d와 %d\n", b1, b2);

	return 0;
}