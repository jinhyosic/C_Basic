#include<stdio.h>

//(num1 - num2) X (num2 + num3) X (num3 % num1)

int minus(int a, int b); //���� �Լ�
int plus(int c, int d); //���� �Լ�
int quo(int e, int f);//������ ���ϴ� �Լ�A

int main() {
	int num1, num2, num3;
	//printf("(num1 - num2)X(num2 + num3)X(num3 % num1)\n");
	printf("�� �İ� ���� ������ ���� �մϴ�. 3���� ���� �Է� : \n");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("%d\n",minus(num1,num2)*plus(num2,num3)*quo(num3,num1) );

	return 0;
}

int minus(int a, int b) {

	return a - b;

}

int plus(int c, int d) {

	return c + d;

}

int quo(int e, int f) {

	return e % f;
}