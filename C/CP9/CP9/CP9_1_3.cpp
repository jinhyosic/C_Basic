#include<stdio.h>

int f(int x) {

	int n1 = 0;
	int n2 = 1;
	int n3;

	if (x == 1) { //1입력시
		printf("%d\n", n1);
	}
	else {
		printf("%d\n%d\n", n1, n2); // 그외의 값 입력시 피보나치 수열의 시작 0, 1 ......
	}
	
	for (int i = 0; i < x - 2; i++) { //위에서 n1,n2가 출력됨으로 입력받은 x의 -2한 만큼 수열 출력
		n3 = n1 + n2; //n-1번째 값과 n-2번째 값의 합을 n에 저장
		printf("%d\n",n3); //n 번째 수열 출력
		n1 = n2; //n-2번째 값에 n-1번째 값 저장
		n2 = n3;// n-1번째 값에 n번째 값 저장

	}
	return 0;
}

int main() {

	int k = 0;

	printf("input num:\n");
	scanf_s("%d", &k);
	f(k);
	return 0;
}