#include<stdio.h>

int even(int* ptr);
int odd(int* ptr);

int main() {

	int arr[10];
	int num;
	int i = 0;

	while (i < 10) {
		printf("input num : \n");
		scanf_s("%d", &num);

		arr[i] = num;
		i++;
	
	}
	for (i; i < 10; i++) {
		printf("Â¦¼ö Ãâ·Â : %d\n", even(arr));
	}
	for (i; i < 10; i++) {
		printf("È¦¼ö Ãâ·Â : %d\n", odd(arr));
	}
	return 0;
}

int even(int* ptr) {
	if (*ptr % 2 == 0) {
		return *ptr;
	}
}

int odd(int* ptr) {
	if (*ptr % 2 != 0) {
		return *ptr;
	}
}//fail