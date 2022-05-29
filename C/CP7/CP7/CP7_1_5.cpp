#include<stdio.h>

int main() {

	int x = 0;
	int i = 0;
	int k = 0;
	int sum = 0;
	float avg = 0.0;
	printf("몇개의 정수?\n");
	scanf_s("%d", &x);

	while (i < x)
	{
		printf("input num:\n");
		scanf_s("%d", &k);
			sum += k;
		i++;
	}
	printf("avg = %.3f\n",(float)sum/x);

	return 0;
}