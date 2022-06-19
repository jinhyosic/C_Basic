/*
#include<stdio.h>

typedef struct point {

	int xpos;
	int ypos;

}Point;

void SwapPoint(Point* pos1, Point* pos2){

	Point x = *pos1;
	*pos1 = *pos2;
	*pos2 = x;

}

int main() {

	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	
	printf("pos1 : x %d, y %d\n", pos1.xpos, pos1.ypos);
	printf("pos2 : x %d, y %d\n", pos2.xpos, pos2.ypos);
	printf("\n");

	SwapPoint(&pos1, &pos2);

	printf("Swap func\n");
	
	printf("pos1 : x %d, y %d\n",pos1.xpos, pos1.ypos);
	printf("pos2 : x %d, y %d\n",pos2.xpos, pos2.ypos);

	return 0;
}
*/