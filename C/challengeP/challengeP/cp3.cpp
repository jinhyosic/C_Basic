#include<stdio.h>

int main() {

	int arr[10];
	int num;

	for (int i = 0; i < 10; i++) {
		printf("10개의 정수 입력 :\n");
		scanf_s("%d", &num);
	
		arr[i] = num;
	}
	for (int i = 0; i < 10; i++) {
		printf("%p\n", &arr[i]);
	}
	return 0;
}//fail
