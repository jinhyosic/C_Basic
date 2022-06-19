#include<stdio.h>
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)

int main() {

	FILE* MY = fopen("C:\\mystory.txt", "wt"); //txt파일을 wt모드의 스트림으로 연결 ,이때 파일을 MY라는 포인터변수로 지시함.
	//char str[30] = {};

	fputs("/#이름 : 진효식\n",MY);
	fputs("/#주민번호 : 960324\n",MY);
	fputs("/#전화번호 : 010 - 8518 - 8990\n",MY);

	//fgets(str, sizeof(str), MY);
	//printf("%s", str);

	fclose(MY);

	return 0;
}