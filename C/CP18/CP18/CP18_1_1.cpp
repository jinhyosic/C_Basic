#include<stdio.h>

int main() {

	int* arr1[5];
	int* arr2[3][5];

	int** ptr = arr1; //int형 포인터변수로 이루어진 1차원 배열 arr1
	int* (*ptr)[5] = arr2; //int형 포인터변수로 이루어진 2차원배열 가로길이는5

	return 0;
}