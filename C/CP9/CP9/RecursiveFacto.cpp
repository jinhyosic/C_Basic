#include<stdio.h>

int facto(int num) {
	if (num == 0)
		return 1;
	else
		return num* facto(num - 1);
}

int main() {
	int x;

	printf("input num:\n");
	scanf_s("%d", &x);

	printf("%d! =",facto(x));
	
	return 0;
}