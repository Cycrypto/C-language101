#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 0; i <= 9; i++) {	// ��
		for (int j = 0; j <= 9; j++) {	//��
			printf("%d\t", i + j * 10);	// �� ���� (n�� = k �϶� n+i�� = k + 10 * i)
		}
		printf("\n");	// �� �ٲ�
	}
}
