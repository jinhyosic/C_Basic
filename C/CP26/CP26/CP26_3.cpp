#include<stdio.h>

#define MAXNUM(X,Y) ((X) > (Y) ? (X) : (Y))

int main() {

	int x = 0;
	int y = 0;

	printf("�� ���� �Է� : \n");
	scanf_s("%d %d", &x, &y);
	
	printf("%d, %d�� �� ū ������ : %d\n", x, y, MAXNUM(x, y));

	return 0;
}