#include<stdio.h>
int main() {

	//양의정수입력 받고 수 만큼 문자열 출력
	int x;
	int n = 0;
	printf("input num\n");
	scanf_s("%d", &x);

	while (n < x) {

		printf("hello world! %d\n", n+1);
		n++;
	}
	return 0;
}