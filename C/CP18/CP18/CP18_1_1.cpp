#include<stdio.h>

int main() {

	int* arr1[5];
	int* arr2[3][5];

	int** ptr = arr1; //int�� �����ͺ����� �̷���� 1���� �迭 arr1
	int* (*ptr)[5] = arr2; //int�� �����ͺ����� �̷���� 2�����迭 ���α��̴�5

	return 0;
}