
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int input = 0;	//�ﰢ���� ���̸� ���� ����

	printf("�ﰢ���� ���̴�? ==>");
	scanf("%d", &input);	//�ﰢ���� ���̸� ����


	for (int i = 1; i <= input; i++) {	// �� �ݺ��� (�Է¹��� ��ŭ ������ �������)
		for (int j = i; j < input; j++) {	// ���� �ݺ��� (input * 2) / 2  ==> input ��ŭ ���� ���� ������ �ö󰥼��� ���� ���� 1ĭ�� �پ���.
			printf(" ");
		}

		for (int k = 0; k < i * 2 - 1; k++) {	// 2 * i - 1 �������� (Ȧ�� ����) # ����Ѵ�
			printf("#");
		}

		printf("\n");	// �� �ٲ�
	}
}
