#include<stdio.h>
#pragma warning(disable:4996)


struct employee { //employee ����ü ����

	char emp_name[30];
	char emp_num[30];
	int sell;

};

int main() {

	struct employee arr[3] = {}; //����ü�迭 ����� �ʱ�ȭ

	for (int i = 0; i < 3; i++) { //�ݺ������� ����ü�迭���� ����� ���� �Է¹���

		printf("name:");
		scanf_s("%s", arr[i].emp_name);
		printf("phone:");
		scanf_s("%s", arr[i].emp_num);
		printf("sell:");
		scanf_s("%d", &arr[i].sell);
	}

	for (int i = 0; i < 3; i++) { //�Է¹��� ����ü�迭�� ���� ���ʷ� ���

		printf("%d ��° ���\n",i + 1);
		printf("name:%s\n", arr[i].emp_name);
		printf("phone:%s\n", arr[i].emp_num);
		printf("sell:%d\n", arr[i].sell);
	}
	return 0;
}