#include<stdio.h>

int f(int x) {

	int n1 = 0;
	int n2 = 1;
	int n3;

	if (x == 1) { //1�Է½�
		printf("%d\n", n1);
	}
	else {
		printf("%d\n%d\n", n1, n2); // �׿��� �� �Է½� �Ǻ���ġ ������ ���� 0, 1 ......
	}
	
	for (int i = 0; i < x - 2; i++) { //������ n1,n2�� ��µ����� �Է¹��� x�� -2�� ��ŭ ���� ���
		n3 = n1 + n2; //n-1��° ���� n-2��° ���� ���� n�� ����
		printf("%d\n",n3); //n ��° ���� ���
		n1 = n2; //n-2��° ���� n-1��° �� ����
		n2 = n3;// n-1��° ���� n��° �� ����

	}
	return 0;
}

int main() {

	int k = 0;

	printf("input num:\n");
	scanf_s("%d", &k);
	f(k);
	return 0;
}