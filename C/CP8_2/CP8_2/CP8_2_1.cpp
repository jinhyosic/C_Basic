#include<stdio.h>

int main() {

	for (int i = 1; i <= 8; i++) { //i는 1부터 8까지 증가함.

		if (i % 2 != 0)   // i가 짝수가 아니라면 위 반복문을 다시 수행함.

			continue;

		for (int j = 1; j <= 10; j++) { //위 if문의 조건을 만족했다면 반복문을 실행

			if (i < j)
				break;  //j의 값이 i의 값보다 커진다면 반복문을 벗어남.

			printf("%d X %d = %d\n", i, j, i * j);
		}


	}

	return 0;
}
