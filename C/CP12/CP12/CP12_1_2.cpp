#include<stdio.h>

int main() {

	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;
	int* temp;

	//*ptr1 + 10; //num1 의 값 10 증가 = 20
	//*ptr2 - 10; //num2 의 값 10 감소 = 10
	
	temp = ptr1;//변수temp에 ptr -> &num1 을 저장
	ptr1 = ptr2;//포인터변수 ptr1 -> ptr2 -> &num2 즉 ptr1 -> &num2
	ptr2 = temp;//ptr2 -> temp (ptr1-> &num1) 즉 ptr2 -> &num1

	printf("%d %d", *ptr1, *ptr2);


	return 0;
}