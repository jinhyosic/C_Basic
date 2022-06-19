#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {

	int maxlen = 0;
	int len = 0;

	char* str;
	printf("input max len : \n");
	scanf_s("%d", &maxlen);
	getchar(); //\n문자 삭제
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	printf("input string");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; //\n문자 삭제
	len = strlen(str);

	for (int i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);

	return 0;
}