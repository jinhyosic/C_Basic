#include <stdio.h>

int main() {

	char a = 'A';
	char b = 'B';
	char c = 'C';

	char A = 'a';
	char B = 'b';
	char C = 'c';

	int k;
	char j;

	printf("�빮�� %c %c %c �� %d %d %d\n",a,b,c, a, b, c);
	printf("�ҹ��� %c %c %c �� %d %d %d\n",A,B,C, A, B, C);
	printf("�빮�ڿ� �ҹ��� ���ʴ�� �Է�\n");

	printf("�ҹ��ڿ� �빮�� �ƽ�Ű�ڵ� ���� ���̴� %d\n", A - a);
	printf("���� �Է½� �ƽ�Ű �ڵ� ��ȯ\n");
	scanf_s("%d",&k);
	printf("%c", k);
	
	//printf("���ĺ� �Է½� �ƽ�Ű�ڵ� �� ���\n");
	//scanf_s("%c", &j);
	//printf("%d", j);

	return 0;
}
