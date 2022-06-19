#include<stdio.h>

void recA(Rect X) {  //시긱형의 넓이 구하는 함수

	printf("넓이: %d\n", (X.r2.xpos - X.r1.xpos) * (X.r2.ypos - X.r1.ypos));
	printf("\n");
};

void fourpoint(Rect X) { //4개의 좌표출력 함수

	printf("좌표1 : %d , %d \n", X.r1.xpos, X.r1.ypos); //0, 0
	printf("좌표2 : %d , %d \n", X.r2.xpos , X.r1.ypos); //100,0
	printf("좌표3 : %d , %d \n", X.r2.xpos , X.r2.ypos);//100, 100
	printf("좌표2 : %d , %d \n", X.r1.xpos , X.r2.ypos);//0,100
};

typedef struct point {

	int xpos;
	int ypos;

}Point;

typedef struct rect {

	Point r1; //xpos,ypos 0,0
	Point r2; //xpos,ypos 100,100

}Rect;

int main() {

	Rect x = { 0,0,100,100 }; //r1.xpos, r1.ypos 0,0 r2.xpos, r2.ypos 100,100

	recA(x); //넓이 함수 호출
	
	fourpoint(x); //좌표 출력 함수 호출

	return 0;
}