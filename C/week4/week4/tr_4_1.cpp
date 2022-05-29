#include<stdio.h>

int main() {

	int x1, y1;
	int x2, y2;

	printf("첫번째 좌표 x1 , y1 입력:\n");
	scanf_s("%d %d", &x1, &y1);

	printf("두번째 좌표 x2 , y2 입력:\n");
	scanf_s("%d %d", &x2, &y2);
	if (x1 > x2 && y1 > y2)
		printf("크기가 작은 좌표 부터 입력\n");
	else	
	printf("%d X %d = %d", x2 - x1, y2 - y1, (x2 - x1) * (y2 - y1));

	return 0;
}