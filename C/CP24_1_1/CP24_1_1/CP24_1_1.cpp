#include<stdio.h>
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)

int main() {

	FILE* MY = fopen("C:\\mystory.txt", "wt"); //txt������ wt����� ��Ʈ������ ���� ,�̶� ������ MY��� �����ͺ����� ������.
	//char str[30] = {};

	fputs("/#�̸� : ��ȿ��\n",MY);
	fputs("/#�ֹι�ȣ : 960324\n",MY);
	fputs("/#��ȭ��ȣ : 010 - 8518 - 8990\n",MY);

	//fgets(str, sizeof(str), MY);
	//printf("%s", str);

	fclose(MY);

	return 0;
}