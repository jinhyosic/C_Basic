#include <stdio.h>
//�� ���� �Է� �� ��� �������� ����.

int div(int a, int b);//��
int quo(int j, int k); //������

int main() {

	int x, y;
	printf("x �� y �� ���ʴ�� �Է� �޽��ϴ�.\n x / y = \n");
	scanf_s("%d %d", &x, &y);

	printf("���� %d, �������� %d �Դϴ�.", div(x, y), quo(x, y));

	return 0;
}

int div(int a, int b) {
	return a / b;
}

int quo(int j, int k) {
	return j % k;
}