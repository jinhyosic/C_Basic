/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	int draw = 0;
	int lose = 0;
	int win = 0;
	int my = 0;

	//int com = (rand() % 3) + 1;


	do {
		int result = 0;
		printf("1.���� 2.���� 3.��");
		scanf_s(" %d ", &my);

		if (my > 3) {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n");
			continue;
		}

		int com = (rand() % 3) + 1;

		result = my - com;
		if (result == -1 || result == 2) {
			printf("�¸�\n");
		}
		else if (result == -2 || result == 1) {
			printf("�й�\n");
			lose++;
		}
		else if (result == 0) {
			printf("���º�\n");
		}
		
	} while (lose != 1);
	printf("���� ���: %d�� %d��\n", win, draw);

	return 0;
}
*/

