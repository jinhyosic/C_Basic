#include<stdio.h>

int main() {

	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;
	int* temp;

	//*ptr1 + 10; //num1 �� �� 10 ���� = 20
	//*ptr2 - 10; //num2 �� �� 10 ���� = 10
	
	temp = ptr1;//����temp�� ptr -> &num1 �� ����
	ptr1 = ptr2;//�����ͺ��� ptr1 -> ptr2 -> &num2 �� ptr1 -> &num2
	ptr2 = temp;//ptr2 -> temp (ptr1-> &num1) �� ptr2 -> &num1

	printf("%d %d", *ptr1, *ptr2);


	return 0;
}