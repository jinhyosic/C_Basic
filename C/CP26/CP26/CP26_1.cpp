#include<stdio.h>

#define SUMABC(A,B,C) ((A) + (B) + (C))
#define MULABC(A,B,C) ((A) * (B) * (C))

int main() {

	printf("¼¼ Á¤¼ö 1, 3, 5 ÀÇ µ¡¼À°á°ú : %d\n", SUMABC(1, 3, 5));

	printf("¼¼ Á¤¼ö 1, 3, 5 ÀÇ °ö¼À°á°ú : %d\n", MULABC(1, 3, 5));

	return 0;
}