#include<stdio.h>

int main() {

	int x1, y1;
	int x2, y2;

	printf("ù��° ��ǥ x1 , y1 �Է�:\n");
	scanf_s("%d %d", &x1, &y1);

	printf("�ι�° ��ǥ x2 , y2 �Է�:\n");
	scanf_s("%d %d", &x2, &y2);
	if (x1 > x2 && y1 > y2)
		printf("ũ�Ⱑ ���� ��ǥ ���� �Է�\n");
	else	
	printf("%d X %d = %d", x2 - x1, y2 - y1, (x2 - x1) * (y2 - y1));

	return 0;
}