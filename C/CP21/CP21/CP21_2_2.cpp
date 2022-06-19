/*
#include<stdio.h>
#include<string.h>

int main() {

	char str1[20] = {};
	char str2[20] = {};
	char str3[40] = {};

	printf("input string1 : \n");
	fgets(str1, sizeof(str1 - 1), stdin); //str1 - 1 로 fgets 함수로 인해 끝에 읽히는 널문자 제거
	printf("input string2 : \n");
	fgets(str2, sizeof(str2 - 1), stdin);

	strcpy(str3, str1); //str3에 str1 복사
	strcat(str3, str2); //str3에 str2의 문자열을 이어붙임

	printf("%s", str3);

	return 0;
}
*/