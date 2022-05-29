#include<stdio.h>
//입력 받은 정수들의 평균을 구함.
int main() {
	int i = 0; //반복 횟수를 정하는 변수
	int x; //입력 받을 정수의 수
	int y; //입력 받을 정수.
	int sum = 0; //합
	float avg = 0.0; //평균

	printf("입력할 정수의 수 : \n");
	scanf_s("%d",&x);

	while (i++ < x) {

		printf("input num\n");
		scanf_s("%d", &y);

		sum += y;

		avg = (float)sum / i;
		printf("현재 평균 %.2f\n", avg);
	}
	printf("최종 평균값은 : %.2f",avg);
	return 0;
}