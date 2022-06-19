/*
#include<stdio.h>
#include<string.h>


int main() {

	char str1[30];
	int len = 0;
	int sum = 0;

	printf("input\n");

	fgets(str1, sizeof(str1), stdin); //str1에 배열의 크기만큼 키보드로 입력받음
	len = strlen(str1); //배열의 길이 만큼 반복문을 비교 횟수를 정함

	for (int i = 0; i < len; i++) {
		if ('1' <= str1[i] && '9' >= str1[i]) //1부터 9까지의 문자가 나오면 
			sum += str1[i]; //sum에 합을 누적
	}
	printf("누적 합 : %d\n", sum);

	return 0;
}
*/