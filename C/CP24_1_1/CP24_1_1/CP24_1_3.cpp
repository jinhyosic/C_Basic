#include<stdio.h>

int main() {

	FILE* MY = fopen("mystory.txt","rt");

	char arr[100] = {};
	
	if (MY == NULL) {

		puts("fail"); //������ ���� ��� fail
		return -1;
	}

	while (fgets(arr, sizeof(arr), MY) != NULL) { //�迭�� �迭�� ũ�⸸ŭ mystory������ ������ �Է¹���. ��, �о�帮�� ���ڿ��� NULL�� �ƴҵ���.

		printf(arr); //MY���� �о�帰 �迭�� ������ ���
	}

	fclose(MY);
	return 0;
}