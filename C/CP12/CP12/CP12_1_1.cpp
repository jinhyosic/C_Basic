#include<stdio.h>

int main() {

	int num = 10;
	int* ptr1 = &num; //ptr1 -> &num
	int* ptr2 = ptr1; // ptr2 -> ptr1 -> &num

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num); //12

	return 0;
}