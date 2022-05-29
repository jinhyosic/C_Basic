#include<stdio.h>

int main() {

	for (int i = 0; i <= 99; i++) { //i는 1부터 99까지 증가
		
		for (int j = 0; j <= 99; j++) {//j도 1부터 99까지 증가

			if (i + j != 99)
				continue;

				printf("%d + %d = %d\n", i, j, i + j);
		}
	}

	return 0;
}