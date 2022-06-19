#include<stdio.h>

#define MAXNUM(X,Y) ((X) > (Y) ? (X) : (Y))

int main() {

	int x = 0;
	int y = 0;

	printf("두 정수 입력 : \n");
	scanf_s("%d %d", &x, &y);
	
	printf("%d, %d중 더 큰 정수는 : %d\n", x, y, MAXNUM(x, y));

	return 0;
}