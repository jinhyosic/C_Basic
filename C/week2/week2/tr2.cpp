#include <stdio.h>
//�� ������ �����ְ� �����ִ� �Լ� ����
int MultiAdd(int a, int b, int c);

int main() {

	int x, y, z;

	while (1) {

		printf("3���� ���� �Է�:\n");
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