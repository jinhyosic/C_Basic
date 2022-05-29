#include <stdio.h>

int main() {

	float x = 0.0;
	float y = 0.0;
	printf("num1, num2 input\n");
	scanf_s("%f %f", &x, &y);

	printf("%f x %f = %.6f", x, y, x * y);


	return 0;
}