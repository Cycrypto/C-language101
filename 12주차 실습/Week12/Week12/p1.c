#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* origin;
	FILE* copy;	//���� ������ ����
	char ch;
	int bytes = 0;
	origin = fopen("C:\\Windows\\system.ini","r");	//��� ����
	copy = fopen("C:\\temp\\system_ini.txt", "w");	//���� ����

	while (1) {
		bytes++;
		ch = fgetc(origin);
		if (ch == EOF)	//���� ������ ��������
			break;

		fputc(ch, copy);
	}

	fputc('\n', copy);

	fclose(origin);
	fclose(copy);

	printf("���� ����Ʈ ���� %d �Դϴ�!", bytes);	//��� ����Ʈ
	return 0;
}