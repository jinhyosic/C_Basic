#include<stdio.h>
//���� ->ȭ��
float cel(float x) {
	
	return (1.8 * x) + 32;
}

float fah(float x) {
	return x / 1.8 - 32;
}

int main() {
	int k = 0;
	float c= 0.0;
	printf("1 = ����->ȭ��\n2 = ȭ��->����\n");
	scanf_s("%d", &k);

	if (k == 1) {
		printf("�����µ� �Է�\n");
		scanf_s("%.6f", &c);
		printf("���� %.6f���� ȭ�� %.6f�� �Դϴ�.\n",c, cel(c));
	}
	else if (k == 2) {
		printf("ȭ���µ� �Է�\n");
		scanf_s("%.6f", &c);
		printf("ȭ�� %.6f���� ���� %.6f�� �Դϴ�.\n",c,fah(c));
	}

	return 0;
}