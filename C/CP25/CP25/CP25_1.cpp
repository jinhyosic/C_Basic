#include<stdio.h>

void func2(int n) {

	int num3 = n + 1;
	//func1�Լ������� ȣ��ǰ� main�Լ��� num1�� ����� ���� +1�� ���� �� ù ��° �Ҹ�
}

void func1(int n) {

	int num2 = n + 1; 
	func2(num2);
	//func2�Լ��� ���� ���� ��ȯ ���� �� +1 ���� �� num2�� �� ��° �Ҹ�
}

int main() {
	
	int num1 = 20;
	func1(num1); //func1 �Լ��� ���� ���� ��ȯ �ް� return 0; �� �Բ� num1 ������ �� ��° �Ҹ�
	return 0;
}