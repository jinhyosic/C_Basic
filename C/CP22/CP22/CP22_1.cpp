#include<stdio.h>


struct employee { //����ü ����

	char emp_name[20];
	char emp_num[20];
	int sell[30];

};

int main() {
	struct employee emp; //����ü ���� emp

	printf("�ٷ����� �̸�, ��ȣ, �޿��� �Է� : "); 
	scanf_s(" %s %s %d", emp.emp_name, emp.emp_num, &emp.sell); //�̸� ��ȣ �޿��� �Է¹���

	printf("�̸�: %s ��ȣ: %s �޿�:%d", emp.emp_name, emp.emp_num, emp.sell); //�Է¹��� ������ ���ʷ� �����

	return 0;
}