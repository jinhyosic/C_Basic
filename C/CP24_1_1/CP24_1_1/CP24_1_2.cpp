#include<stdio.h>

int main() {

	FILE* MY = fopen("mystory.txt", "at"); //txt������ wt����� ��Ʈ������ ���� ,�̶� ������ MY��� �����ͺ����� ������.

	fputs("#��ܸԴ� ���� : ����\n", MY);
	fputs("#��� : x\n", MY);

	fclose(MY);

	return 0;
}