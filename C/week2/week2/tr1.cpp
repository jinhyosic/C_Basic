#include <stdio.h>
//���ϱ� ���α׷�
int prod(int a, int b);
int main() {

	int x, y;

	while (1) {

		printf("�ΰ��� ������ �Է��ϼ���:\n(0 0 �Է½� ����.)\n");
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