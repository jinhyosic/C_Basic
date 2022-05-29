#include<stdio.h>

int	main()
{
	int S, M, H, inputSec;

	printf("초 단위를 입력하세요. : \n");
	scanf_s("%d", &inputSec);

	H = inputSec / 3600;

	inputSec = inputSec % 3600;

	M = inputSec / 60;

	S = inputSec % 60;

	printf("입력한 %d초는 %d시간 %d분 %d초 입니다.", inputSec, H, M, S);

	return 0;

}

