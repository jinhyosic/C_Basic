#include<stdio.h>

int main() {

	int x = 0;

	printf("input num:\n");
	scanf_s("%d",&x);

	for (int i = 2; i <= x; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				break;
			
		}
		printf("%d\n", i);
	}

	return 0;
}