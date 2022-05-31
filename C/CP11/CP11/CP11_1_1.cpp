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

		printf("최대 : %d\n", max);
		printf("최소 : %d\n", min);
		printf("총합 : %d\n", sum);

		return 0;
	}*/


	int arr[5] = { 0,0,0,0,0 };
	int max, min, sum;

	for (int i = 0; i < 5; i++) {

		printf("배열 요소 입력 : \n");
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
	printf("최대 %d\n최소 %d\n 총합%d", max, min, sum);
	

	return 0;
}
