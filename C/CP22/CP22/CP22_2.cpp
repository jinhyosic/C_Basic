#include<stdio.h>
#pragma warning(disable:4996)


struct employee { //employee 구조체 정의

	char emp_name[30];
	char emp_num[30];
	int sell;

};

int main() {

	struct employee arr[3] = {}; //구조체배열 선언과 초기화

	for (int i = 0; i < 3; i++) { //반복문으로 구조체배열안의 멤버에 값을 입력받음

		printf("name:");
		scanf_s("%s", arr[i].emp_name);
		printf("phone:");
		scanf_s("%s", arr[i].emp_num);
		printf("sell:");
		scanf_s("%d", &arr[i].sell);
	}

	for (int i = 0; i < 3; i++) { //입력받은 구조체배열의 값을 차례로 출력

		printf("%d 번째 사원\n",i + 1);
		printf("name:%s\n", arr[i].emp_name);
		printf("phone:%s\n", arr[i].emp_num);
		printf("sell:%d\n", arr[i].sell);
	}
	return 0;
}