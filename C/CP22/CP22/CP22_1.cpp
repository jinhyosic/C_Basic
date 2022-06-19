#include<stdio.h>


struct employee { //구조체 선언

	char emp_name[20];
	char emp_num[20];
	int sell[30];

};

int main() {
	struct employee emp; //구조체 변수 emp

	printf("근로자의 이름, 번호, 급여를 입력 : "); 
	scanf_s(" %s %s %d", emp.emp_name, emp.emp_num, &emp.sell); //이름 번호 급여를 입력받음

	printf("이름: %s 번호: %s 급여:%d", emp.emp_name, emp.emp_num, emp.sell); //입력받은 값들을 차례로 출력함

	return 0;
}