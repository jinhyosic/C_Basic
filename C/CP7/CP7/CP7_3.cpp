#include<stdio.h>
//2단부터 9단
int main() {
	int x = 2;
	int y = 1;
	
	do{
	
		do {
			printf("%d X %d = %d\n", x, y, x * y);
			y++;
		} while (y < 10);
		y = 1;
		x++;
	} while (x < 10);

	return 0;
}