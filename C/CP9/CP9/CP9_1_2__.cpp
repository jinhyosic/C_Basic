#include<stdio.h>
//¼·¾¾ ->È­¾¾
float cel(float x) {
	
	return (1.8 * x) + 32;
}

float fah(float x) {
	return x / 1.8 - 32;
}

int main() {
	int k = 0;
	float c= 0.0;
	printf("1 = ¼·¾¾->È­¾¾\n2 = È­¾¾->¼·¾¾\n");
	scanf_s("%d", &k);

	if (k == 1) {
		printf("¼·¾¾¿Âµµ ÀÔ·Â\n");
		scanf_s("%.6f", &c);
		printf("¼·¾¾ %.6fµµ´Â È­¾¾ %.6fµµ ÀÔ´Ï´Ù.\n",c, cel(c));
	}
	else if (k == 2) {
		printf("È­¾¾¿Âµµ ÀÔ·Â\n");
		scanf_s("%.6f", &c);
		printf("È­¾¾ %.6fµµ´Â ¼·¾¾ %.6fµµ ÀÔ´Ï´Ù.\n",c,fah(c));
	}

	return 0;
}