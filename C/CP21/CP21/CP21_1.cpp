
#include<stdio.h>

char swap(int c) {

	if (65 <= c && c <= 90) //대문자일 경우만으로 조건 제한
		return c = c + 32; //아스키 코드값을 증가 시켜 대문자를 소문자로
	else
		return c;
}

int main() {
	
	int c1 = 0;

	printf("input char");

	c1 = getchar(); //getchar 키보드로 입력받음
	
	putchar(swap(c1)); //putchar 모니터로 출력함

	return 0;
}
