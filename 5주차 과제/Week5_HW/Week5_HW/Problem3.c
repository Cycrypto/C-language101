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
	if (n == 1) {	//Ż������
		return 1;	// 10���� 1���� n�� �ٿ������鼭 1�̵Ǹ� return 1�ϰ� ��� �Լ� ����
	}

	else {
		return factorial(n - 1) * n;	//���� 1���� ū ���� n�̶�� n * (n-1)! ���
	}
}
