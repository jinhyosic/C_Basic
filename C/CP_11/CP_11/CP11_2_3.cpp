#include<stdio.h>

int main() {

	char arr[30] = {};
	int len = 0;
	char max = 0;
	printf("intput char\n");
	scanf_s("%s", arr);
	
	while (arr[len] != '|0') {
		len++;
	}

	for (int i = 0; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("�ƽ�Ű �ڵ尪�� ���� ū %c\n", max);

	return 0;
}