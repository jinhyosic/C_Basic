#include<stdio.h>

int max = 0;
int min = 0;
int total = 0;

int main() {

	int arr[] = { 0, 0, 0, 0, 0 };

	for (int i = 0; i < 5; i++) {
		printf("input num:[5]\n");
		scanf_s("%d", &arr[i]);
	}
	
	int max = min =  arr[0];
	for (int i = 0; i < 5; i++) {

		if (max < arr[i]) {
			max = arr[i];

		}
		if (min > arr[i]) {
			min = arr[i];
		}
		total += arr[i];
	}
	printf("�ִ밪 %d\n", max);
	printf("�ּҰ� %d\n", min);
	printf("���� %d\n", total);
	return 0;
}