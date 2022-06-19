#include<stdio.h>
#include<string.h>

long FS(FILE* MY) {

	long fpos; //파일위치지시자의 위치를 저장할 변수
	long fsize; //파일 사이즈?
	fpos = ftell(MY); //파일 위치 지시자의 위치를 저장 (시작 위치 저장)

	fseek(MY, 0, SEEK_END); //파일위치지시자가 MY내에서 마지막(NULL값)을 가리키게 함
	fsize = ftell(MY); //파일 위치지시자의 위치를 fsize에 저장
	fseek(MY, fpos, SEEK_SET); //파일위치 지시자를 첫 위치로 되돌림

	return fsize;
}
int main() {

	FILE* MY = fopen("mystory.txt","rt");
	char arr[100] = {}; //텍스트 파일을 저장할 배열

	fgets(arr, 100, MY); //파일의 내용으로 부터 100의 크기까지 배열에 입력받음
	fputs(arr, stdout); //fgets함수로 입력받아 배열에 저장된 데이터를 모니터로 출력
	printf("파일의크기 : %ld", FS(MY)); //출력
	
	fgets(arr, 100, MY); 
	fputs(arr, stdout); 
	printf("파일의크기 : %ld", FS(MY));

	fgets(arr, 100, MY); 
	fputs(arr, stdout); 
	printf("파일의크기 : %ld", FS(MY));


	return 0;
}