#include<stdio.h>

int main() {

	for (int i = 0; i <= 99; i++) { //i�� 1���� 99���� ����
		
		for (int j = 0; j <= 99; j++) {//j�� 1���� 99���� ����

			if (i + j != 99)
				continue;

				printf("%d + %d = %d\n", i, j, i + j);
		}
	}

	return 0;
}