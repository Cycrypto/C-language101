#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char** argv) {

	if (argc < 3) {
		printf("�μ��� ����� ������ �ּ���.\n");	//���޵� ���� 3���� ���� ���
		return 0;
	}

	if (strcmp(argv[1], "-u") == 0) {	//toUpper
		printf("-u :");
		for (int i = 0; i < strlen(argv[2]); i++) {	//toUpper�� ��� '����'�� �����ϹǷ�
			printf("%c", toupper(*(*(argv + 2) + i)));//���ڿ��� ���̸�ŭ �ݺ��� ����
		}
	}

	else if (strcmp(argv[1], "-l") == 0) {
		printf("-l :");
		for (int i = 0; i < strlen(argv[2]); i++) {	//toLower�� ��� '����'�� �����ϹǷ�
			printf("%c", tolower(*(*(argv + 2) + i)));//���ڿ��� ���̸�ŭ �ݺ��� ����
		}
	}

	else if (strcmp(argv[1], "-p") == 0) {//�״�� ����ϴ� �ɼ�
		printf("%s",argv[2]);
	}

	else {
		printf("�������� �ʴ� �ɼ��Դϴ�\n");	//�ɼ� ���� ������ ���� ��
	}
}