#include<stdio.h>
int input3max(int x, int y, int z) {

	if (x > y)
		return x > z ? x : z;
	else
		return y > z ? y : z;
	
}

int input3min(int x, int y, int z) {

	if (x < y)
		return x < z ? x : z;
	else
		return y < z ? y : z;

}

int main() {

	int x, y, z = 0;

	printf("intput num\n");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("max = %d min = %d ",input3max(x,y,z),input3min(x,y,z));

	return 0;
}