#include <stdio.h>

int rev(int n);

int main() {

	while (1) {
		int x;

		printf("num : ");
		scanf_s("%d", &x);

		printf("num = %d \n", rev(x));

		if (x == 0)
			break;
	}
	return 0;
}

int rev(int n) {

	if (n >= 0)
		return n;
	else
		return -n;

}