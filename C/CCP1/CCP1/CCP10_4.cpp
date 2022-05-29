#include<stdio.h>

int main() {

	int c = 500;
	int s = 700;
	int k = 400;
	int total = 3500;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int l = 1; l < 10; l++)
				if(( c * i + s * j + k * l) == total)
				printf("%d°³ %d°³ %d°³\n", i,j,l);
		}
	}

	return 0;
}