/*
#include<stdio.h>
#include<string.h>

int main() {

	char str1[20] = {};
	char str2[20] = {};
	char str3[40] = {};

	printf("input string1 : \n");
	fgets(str1, sizeof(str1 - 1), stdin); //str1 - 1 �� fgets �Լ��� ���� ���� ������ �ι��� ����
	printf("input string2 : \n");
	fgets(str2, sizeof(str2 - 1), stdin);

	strcpy(str3, str1); //str3�� str1 ����
	strcat(str3, str2); //str3�� str2�� ���ڿ��� �̾����

	printf("%s", str3);

	return 0;
}
*/