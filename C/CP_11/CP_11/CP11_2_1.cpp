#include<stdio.h>

int main() {
	
	char arr[20];
	int len = 0;

	printf("input char\n");
	scanf("%s", arr);

	while (arr[len] != '|0') {
		len++;
	}

	printf("%d", len+1);
	
	return 0;
}