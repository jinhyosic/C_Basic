#include<stdio.h>

void func2(int n) {

	int num3 = n + 1;
	//func1함수내에서 호출되고 main함수의 num1이 복사된 값에 +1을 연산 후 첫 번째 소멸
}

void func1(int n) {

	int num2 = n + 1; 
	func2(num2);
	//func2함수로 부터 값을 반환 받은 후 +1 연산 후 num2가 두 번째 소멸
}

int main() {
	
	int num1 = 20;
	func1(num1); //func1 함수로 부터 값을 반환 받고 return 0; 과 함께 num1 마지막 세 번째 소멸
	return 0;
}