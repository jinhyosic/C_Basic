#include<stdio.h>

int main() {

	for (int i = 1; i <= 8; i++) { //i�� 1���� 8���� ������.

		if (i % 2 != 0)   // i�� ¦���� �ƴ϶�� �� �ݺ����� �ٽ� ������.

			continue;

		for (int j = 1; j <= 10; j++) { //�� if���� ������ �����ߴٸ� �ݺ����� ����

			if (i < j)
				break;  //j�� ���� i�� ������ Ŀ���ٸ� �ݺ����� ���.

			printf("%d X %d = %d\n", i, j, i * j);
		}


	}

	return 0;
}
