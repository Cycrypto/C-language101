#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n);	//���丮�� �Լ� ����

int main(void) {
	int input = 0;	// �Է��� ���� ����
	printf("���� ���� :");
	scanf("%d", &input);	// �Է� ����

	printf("���丮�� : ");
	printf("%d", factorial(input));	//�Է� ���� ���� �Լ��� ���ڷ� �Ѱ���
}

int factorial(int n) {	// ���丮�� �Լ�	(�� n�� int���̹Ƿ� ǥ������ �̻��� ������ �����÷ο찡 ����.) ==> 12!������ ���������� ����
	int fact = 1;	//���丮���� ������ ���� (0�̸� ���ص� 0�̹Ƿ� 1�� �ʱ�ȭ)
	for (int i = 1; i <= n; i++) {	// i �ݺ��� ���鼭 n ���� ������
		fact *= i;
	}
	return fact;	//fact ����
}