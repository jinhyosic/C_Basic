#include<stdio.h>

int	main()
{
	int S, M, H, inputSec;

	printf("�� ������ �Է��ϼ���. : \n");
	scanf_s("%d", &inputSec);

	H = inputSec / 3600;

	inputSec = inputSec % 3600;

	M = inputSec / 60;

	S = inputSec % 60;

	printf("�Է��� %d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", inputSec, H, M, S);

	return 0;

}

