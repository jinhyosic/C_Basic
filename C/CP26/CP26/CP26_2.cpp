#include<stdio.h>

#define PI 3.14
#define CIR_AREA(r) ( ( (r) * (r) ) * (PI) )

int main() {

	double r = 0;

	printf("���� ������ �Է½� ���� ���� ���: \n");
	scanf_s("%lf", &r);

	printf("���� �������� %lf ���� ���̴� %lf\n", r, CIR_AREA(r) );

	return 0;
}