
#include<stdio.h>

char swap(int c) {

	if (65 <= c && c <= 90) //�빮���� ��츸���� ���� ����
		return c = c + 32; //�ƽ�Ű �ڵ尪�� ���� ���� �빮�ڸ� �ҹ��ڷ�
	else
		return c;
}

int main() {
	
	int c1 = 0;

	printf("input char");

	c1 = getchar(); //getchar Ű����� �Է¹���
	
	putchar(swap(c1)); //putchar ����ͷ� �����

	return 0;
}
