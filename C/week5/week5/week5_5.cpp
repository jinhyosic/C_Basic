#include<stdio.h>
//�Է� ���� �������� ����� ����.
int main() {
	int i = 0; //�ݺ� Ƚ���� ���ϴ� ����
	int x; //�Է� ���� ������ ��
	int y; //�Է� ���� ����.
	int sum = 0; //��
	float avg = 0.0; //���

	printf("�Է��� ������ �� : \n");
	scanf_s("%d",&x);

	while (i++ < x) {

		printf("input num\n");
		scanf_s("%d", &y);

		sum += y;

		avg = (float)sum / i;
		printf("���� ��� %.2f\n", avg);
	}
	printf("���� ��հ��� : %.2f",avg);
	return 0;
}