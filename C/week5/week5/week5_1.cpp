#include<stdio.h>
int main() {

	//���������Է� �ް� �� ��ŭ ���ڿ� ���
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