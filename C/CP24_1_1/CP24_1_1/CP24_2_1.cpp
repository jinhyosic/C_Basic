#include<stdio.h>
#include<string.h>

long FS(FILE* MY) {

	long fpos; //������ġ�������� ��ġ�� ������ ����
	long fsize; //���� ������?
	fpos = ftell(MY); //���� ��ġ �������� ��ġ�� ���� (���� ��ġ ����)

	fseek(MY, 0, SEEK_END); //������ġ�����ڰ� MY������ ������(NULL��)�� ����Ű�� ��
	fsize = ftell(MY); //���� ��ġ�������� ��ġ�� fsize�� ����
	fseek(MY, fpos, SEEK_SET); //������ġ �����ڸ� ù ��ġ�� �ǵ���

	return fsize;
}
int main() {

	FILE* MY = fopen("mystory.txt","rt");
	char arr[100] = {}; //�ؽ�Ʈ ������ ������ �迭

	fgets(arr, 100, MY); //������ �������� ���� 100�� ũ����� �迭�� �Է¹���
	fputs(arr, stdout); //fgets�Լ��� �Է¹޾� �迭�� ����� �����͸� ����ͷ� ���
	printf("������ũ�� : %ld", FS(MY)); //���
	
	fgets(arr, 100, MY); 
	fputs(arr, stdout); 
	printf("������ũ�� : %ld", FS(MY));

	fgets(arr, 100, MY); 
	fputs(arr, stdout); 
	printf("������ũ�� : %ld", FS(MY));


	return 0;
}