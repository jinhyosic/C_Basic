#include<stdio.h>

#define SUMABC(A,B,C) ((A) + (B) + (C))
#define MULABC(A,B,C) ((A) * (B) * (C))

int main() {

	printf("�� ���� 1, 3, 5 �� ������� : %d\n", SUMABC(1, 3, 5));

	printf("�� ���� 1, 3, 5 �� ������� : %d\n", MULABC(1, 3, 5));

	return 0;
}