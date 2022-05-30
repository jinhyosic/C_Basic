#include<stdio.h>

void CF1(int**ptr1, int*(*ptr2)[5]) {

}
void CF2(int***ptr3, int***(*ptr4)[5]) {

}

int main() {

	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	CF1(arr1, arr2);
	CF2(arr3, arr4);


	return 0;
}