#include<stdio.h>

#define PI 3.14
#define CIR_AREA(r) ( ( (r) * (r) ) * (PI) )

int main() {

	double r = 0;

	printf("원의 반지름 입력시 원의 넓이 출력: \n");
	scanf_s("%lf", &r);

	printf("원의 반지름은 %lf 원의 넓이는 %lf\n", r, CIR_AREA(r) );

	return 0;
}