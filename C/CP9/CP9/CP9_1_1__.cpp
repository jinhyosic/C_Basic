#include<stdio.h>

int max(int x, int y,int z) {
	if (x > y) {
		return x > z ? x : z;
	}
	else if (x < y) {
		return y > z ? y : z;
	}
	else {
		return z > x ? z : x;
	}
}

int min(int x, int y, int z) {
	if (x < y) {
		return x < z ? x : z;
	}
	else if (y < x) {
		return y < z ? y : z;
	}
	else {
		return x < z ? x : z;
	}
}

int main() {

	int x, y, z = 0;

		printf("input 3 num:\n");
		scanf_s("%d %d %d", &x, &y, &z);

		printf("가장 큰수는 : %d \n ", max(x, y, z));
		printf("가장 작은 수는 : %d\n", min(x, y, z));
	
	return 0;
}