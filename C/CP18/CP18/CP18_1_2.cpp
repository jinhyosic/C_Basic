#include<stdio.h>

void SF1(int* ptr1, int* ptr2) {
	
}
void SF2(int(*ptr3)[4], int(*ptr4)[4]) {

}

int main() {

	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SF1(arr1, arr2);
	SF2(arr3, arr4);

	return 0;
}