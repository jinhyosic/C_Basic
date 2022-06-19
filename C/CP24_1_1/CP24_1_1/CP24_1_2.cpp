#include<stdio.h>

int main() {

	FILE* MY = fopen("mystory.txt", "at"); //txt파일을 wt모드의 스트림으로 연결 ,이때 파일을 MY라는 포인터변수로 지시함.

	fputs("#즐겨먹는 음식 : 피자\n", MY);
	fputs("#취미 : x\n", MY);

	fclose(MY);

	return 0;
}