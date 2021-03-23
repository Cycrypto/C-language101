#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define LINES 10

int getline(char* buffer, int max_num)
{
	fflush(stdin);	// ���۸� ����ִ� ����

	fgets(buffer, max_num , stdin);	// ǥ�� �Է����� ���ڿ� ����
	if (strlen(buffer) == 1) {	//������ ��� (���๮�ڸ� ���Ե� ����)
		buffer[strlen(buffer) - 1] = '\0';	//������ ���๮�� ����
		return 0;	//0�� ��ȯ�Ͽ� Main �Լ��� �ݺ����� Ż��
	}

	else {
		buffer[strlen(buffer) - 1] = '\0';// �� �̿��� ���
		return 1;	//�� �̿��� ��� 1�� ��ȯ��.
	}
	
}

void revline(char* line)
{
	int line_length = strlen(line);	//������ ���̸� ������.
	for (int i = 0; i < line_length / 2; i++) {	//������ ���ڿ��� �ٲٴ� ����� ��
		int temp = line[i];
		line[i] = line[line_length - i - 1];
		line[line_length - i - 1] = temp;
	}
}
int main(void)
{
	char* line[LINES];
	char buf[MAX];
	int num = 0;

	printf("������ �Է��Ͻÿ� (�����Ϸ��� ������ ù���ڷ� ���͸� ĥ ��)...\n");
	while (getline(buf, MAX) != 0) // getline(): �� ������ �о buf�� ������
	{
		line[num] = (char *)malloc(strlen(buf)); // �� ĭ ä���
		strcpy(line[num], buf); // �� ĭ ä���

		//printf("%s\n", line[num]);
		num++;

	}
	printf("\n�Է��� ������ ���� ��� ���...\n");

	for (int i = 0; i < num; i++) // �� ĭ ä���
	{
		revline(line[i]); // revline(): �� ������ ������ ������
		printf("%s\n", line[i]);
	}
	return 0;
}