#include<stdio.h>
//정수입력시 합산. 0입력시 종료
int main() {

	int x = 1;
	int sum = 0;

	while (x != 0) {

		printf("input num : \n");
		scanf_s("%d", &x);
		sum += x;
		printf("sum : %d \n",sum);
	}

	printf("total : %d ", sum);

	return 0;
}
