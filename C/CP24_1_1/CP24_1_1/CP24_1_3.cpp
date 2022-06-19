#include<stdio.h>

int main() {

	FILE* MY = fopen("mystory.txt","rt");

	char arr[100] = {};
	
	if (MY == NULL) {

		puts("fail"); //파일이 없을 경우 fail
		return -1;
	}

	while (fgets(arr, sizeof(arr), MY) != NULL) { //배열에 배열의 크기만큼 mystory파일의 내용을 입력받음. 단, 읽어드리는 문자열이 NULL이 아닐동안.

		printf(arr); //MY에서 읽어드린 배열의 내용을 출력
	}

	fclose(MY);
	return 0;
}