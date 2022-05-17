#include<stdio.h>

//(num1 - num2) X (num2 + num3) X (num3 % num1)

int minus(int a, int b); //뺄셈 함수
int plus(int c, int d); //덧셈 함수
int quo(int e, int f);//나머지 구하는 함수A

int main() {
	int num1, num2, num3;
	//printf("(num1 - num2)X(num2 + num3)X(num3 % num1)\n");
	printf("위 식과 같은 연산을 수행 합니다. 3개의 정수 입력 : \n");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("%d\n",minus(num1,num2)*plus(num2,num3)*quo(num3,num1) );

	return 0;
}

int minus(int a, int b) {

	return a - b;

}

int plus(int c, int d) {

	return c + d;

}

int quo(int e, int f) {

	return e % f;
}