#include<stdio.h>

int main() {

	int num1;
	int num2;

	int sum1 = 0;
	int sum2 = 0;
	printf("input num1 : \n");
	scanf_s("%d", &num1);
	printf("input num2 : \n");
	scanf_s("%d", &num2);
	if(num1 < num2){
		for (; num1 <= num2; num1++) {

			sum1 += num1;

		}
		printf("num1~num2 sum = %d\n", sum1);
	}
	else if (num1 > num2) {
		for (; num2 <= num1; num2++) {

			sum2 += num2;
		}
		printf("num2~num1 sum = %d\n", sum2);
	}
	else
		printf("num1 != num2");
	return 0;
}