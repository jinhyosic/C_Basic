#include<stdio.h>

int main() {

	/*	int arr[5] = {0,0,0,0,0};
		int max, min, sum;

		for (int i = 0; i < 5; i++) {

			printf("input num : \n");
			scanf_s("%d", &arr[i]);
		}
		max = min = sum = arr[0];

		for (int i = 0; i < 5; i++) {
			sum += arr[i];
			if (arr[i] > max) {
				max = arr[i];
			}
			if (arr[i] < min) {
				min = arr[i];
			}
		}

		printf("�ִ� : %d\n", max);
		printf("�ּ� : %d\n", min);
		printf("���� : %d\n", sum);

		return 0;
	}*/


	int arr[5] = { 0,0,0,0,0 };
	int max, min, sum;

	for (int i = 0; i < 5; i++) {

		printf("�迭 ��� �Է� : \n");
		scanf_s("%d", &arr[i]);

	}
	
	max = min = sum = arr[0];
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("�ִ� %d\n�ּ� %d\n ����%d", max, min, sum);
	

	return 0;
}
