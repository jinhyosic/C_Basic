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

	printf("대문자 %c %c %c 는 %d %d %d\n",a,b,c, a, b, c);
	printf("소문자 %c %c %c 는 %d %d %d\n",A,B,C, A, B, C);
	printf("대문자와 소문자 차례대로 입력\n");

	printf("소문자와 대문자 아스키코드 값의 차이는 %d\n", A - a);
	printf("정수 입력시 아스키 코드 변환\n");
	scanf_s("%d",&k);
	printf("%c", k);
	
	//printf("알파벳 입력시 아스키코드 값 출력\n");
	//scanf_s("%c", &j);
	//printf("%d", j);

	return 0;
}
