#include<stdio.h>

void recA(Rect X) {  //�ñ����� ���� ���ϴ� �Լ�

	printf("����: %d\n", (X.r2.xpos - X.r1.xpos) * (X.r2.ypos - X.r1.ypos));
	printf("\n");
};

void fourpoint(Rect X) { //4���� ��ǥ��� �Լ�

	printf("��ǥ1 : %d , %d \n", X.r1.xpos, X.r1.ypos); //0, 0
	printf("��ǥ2 : %d , %d \n", X.r2.xpos , X.r1.ypos); //100,0
	printf("��ǥ3 : %d , %d \n", X.r2.xpos , X.r2.ypos);//100, 100
	printf("��ǥ2 : %d , %d \n", X.r1.xpos , X.r2.ypos);//0,100
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

	recA(x); //���� �Լ� ȣ��
	
	fourpoint(x); //��ǥ ��� �Լ� ȣ��

	return 0;
}