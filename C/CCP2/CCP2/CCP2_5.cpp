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
		printf("1.바위 2.가위 3.보");
		scanf_s(" %d ", &my);

		if (my > 3) {
			printf("잘못 입력하셨습니다. 다시 입력하세요\n");
			continue;
		}

		int com = (rand() % 3) + 1;

		result = my - com;
		if (result == -1 || result == 2) {
			printf("승리\n");
		}
		else if (result == -2 || result == 1) {
			printf("패배\n");
			lose++;
		}
		else if (result == 0) {
			printf("무승부\n");
		}
		
	} while (lose != 1);
	printf("게임 결과: %d승 %d무\n", win, draw);

	return 0;
}
*/

