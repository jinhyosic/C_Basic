/*
#include<stdio.h>
#include<string.h>


int main() {

	char str1[30];
	int len = 0;
	int sum = 0;

	printf("input\n");

	fgets(str1, sizeof(str1), stdin); //str1�� �迭�� ũ�⸸ŭ Ű����� �Է¹���
	len = strlen(str1); //�迭�� ���� ��ŭ �ݺ����� �� Ƚ���� ����

	for (int i = 0; i < len; i++) {
		if ('1' <= str1[i] && '9' >= str1[i]) //1���� 9������ ���ڰ� ������ 
			sum += str1[i]; //sum�� ���� ����
	}
	printf("���� �� : %d\n", sum);

	return 0;
}
*/