#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand((int)time(NULL));

	int ran = 0; //난수를 저장할 변수
	int strike = 0;
	int ball = 0;
	
	int ranArr[3];
	for (int i = 0;i < 3;i++) {
		ran = rand();
		ranArr[i] = ran % 10;
	}
	
	do {

		printf("3개의 숫자 선택\n");
		int Arr[3] = { 0,0,0 };

		for (int i = 0;i < 3;i++) {
			scanf_s("%d", Arr[i]);
		}

		for (int i = 0; i < 3; i++) {

			for (int j = 0;j < 3;j++) {

				if (ranArr[i] == Arr[j]) {

					if (i == j)
						strike++;

					else ball++;
				}
			}
		}
	} while (strike != 3);

		printf("%d strike, %d ball\n", strike, ball);
		strike = 0;
		ball = 0;

		return 0;
	}